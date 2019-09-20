// CNom.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CNom.h"
#include "afxdialogex.h"
#include "CDiagDonne.h"
#include "CPartie.h"


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
	ON_EN_CHANGE(IDC_EDIT1, &CNom::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &CNom::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &CNom::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &CNom::OnEnChangeEdit4)
	ON_BN_CLICKED(IDCANCEL, &CNom::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON1, &CNom::OnBnClickedButton1)
END_MESSAGE_MAP()


// Gestionnaires de messages de CNom


void CNom::OnEnChangeEdit1()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CNom::OnEnChangeEdit2()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CNom::OnEnChangeEdit3()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CNom::OnEnChangeEdit4()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CNom::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	//recupérer les noms des 4 joueurs
	UpdateData(true);
	//creer le tableau des 4 joueurs
	CStringA strA(mJoueur1);      // multi-byte
	string Mystring = strA.GetBuffer();   // avec MyCString de type CString.
	
	CStringA strB(mJoueur2);      // multi-byte
	string Mystring2 = strA.GetBuffer();
	
	CStringA strC(mJoueur3);      // multi-byte
	string Mystring3 = strA.GetBuffer();
	
	CStringA strD(mJoueur4);      // multi-byte
	string Mystring4 = strA.GetBuffer();
	
	lesJoueurs[0] = new CJoueur(Mystring, 0);
	lesJoueurs[1] = new CJoueur(Mystring2, 0);
	lesJoueurs[2] = new CJoueur(Mystring3, 0);
	lesJoueurs[3] = new CJoueur(Mystring4, 0);
	//creer la partie-
	laPartie = new CPartie(lesJoueurs);
	//passez a la fenetre suivante
}


void CNom::OnBnClickedCancel()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnCancel();
}