// CDiagNewDonn.cpp�: fichier d'impl�mentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CDiagNewDonne.h"
#include "afxdialogex.h"
#include "CDiagDonne.h"
#include "CDonne.h"
#include "CPartie.h"
#include "CNom.h"
#include "CJoueur.h"
#include "CPoints.h"


// Bo�te de dialogue CDiagNewDonne

IMPLEMENT_DYNAMIC(CDiagNewDonne, CDialogEx)

CDiagNewDonne::CDiagNewDonne(CPartie *LaP,CJoueur * lesJoueurs[], CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAROTMFC_NEWDONNE, pParent)
{
	laPartie = LaP;
	for (int i = 0; i < 4; i++)
		this->lesJoueurs[i] = lesJoueurs[i];
}

CDiagNewDonne::~CDiagNewDonne()
{
}

void CDiagNewDonne::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDiagNewDonne, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDiagNewDonne::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CDiagNewDonne::OnBnClickedCancel)
END_MESSAGE_MAP()


// Gestionnaires de messages de CDiagNewDonne


void CDiagNewDonne::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
	
	//Ouverture de la page Donne
	CDiagDonne Donne(laPartie,lesJoueurs);
	ShowWindow(SW_HIDE);
	Donne.DoModal();
	laPartie->CreerUneDonne();
	ShowWindow(SW_SHOW);

}


void CDiagNewDonne::OnBnClickedCancel()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
	//Sauvegarde de la partie

	//Fermeture de la fen�tre
	CDialogEx::OnCancel();
}
