// CNom.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CNom.h"
#include "afxdialogex.h"
#include "CDiagDonne.h"
#include "CPartie.h"
#include "CScore.h"


// Boîte de dialogue CNom

IMPLEMENT_DYNAMIC(CNom, CDialogEx)

CNom::CNom(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAROTMFC_NOM, pParent)
	, mJoueur1(_T(""))
	, mJoueur2(_T(""))
	, mJoueur3(_T(""))
	, mJoueur4(_T(""))
{
	
}

CNom::~CNom()
{

}

void CNom::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, mJoueur1);
	DDX_Text(pDX, IDC_EDIT2, mJoueur2);
	DDX_Text(pDX, IDC_EDIT3, mJoueur3);
	DDX_Text(pDX, IDC_EDIT4, mJoueur4);
}


BEGIN_MESSAGE_MAP(CNom, CDialogEx)
	ON_BN_CLICKED(IDOK, &CNom::OnBnClickedOk)
//	ON_ACN_START(IDC_ANIMATE1, &CNom::OnAcnStartAnimate1)
END_MESSAGE_MAP()

void CNom::OnBnClickedOk()
{
	//recupérer les noms des 4 joueurs
	UpdateData(true);
	//creer le tableau des 4 joueurs
	CStringA strA(mJoueur1);      // multi-byte
	string Mystring = strA.GetBuffer();   // avec MyCString de type CString.

	CStringA strB(mJoueur2);      // multi-byte
	string Mystring2 = strB.GetBuffer();

	CStringA strC(mJoueur3);      // multi-byte
	string Mystring3 = strC.GetBuffer();

	CStringA strD(mJoueur4);      // multi-byte
	string Mystring4 = strD.GetBuffer();

	lesJoueurs[0] = new CJoueur(Mystring, 0);
	lesJoueurs[1] = new CJoueur(Mystring2, 0);
	lesJoueurs[2] = new CJoueur(Mystring3, 0);
	lesJoueurs[3] = new CJoueur(Mystring4, 0);
	//creer la partie-
	laPartie = new CPartie(lesJoueurs);
	laPartie->CreerUneDonne();
	//passez a la fenetre suivante
	CDiagDonne dlg(laPartie,lesJoueurs);	
	dlg.DoModal();
	PostMessage(WM_KEYDOWN, VK_ACCEPT, 0);
	CDialogEx::OnOK();
}

void CNom::OnAcnStartAnimate1()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}
