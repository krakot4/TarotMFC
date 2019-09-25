// CDiagDonne.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CDiagDonne.h"
#include "afxdialogex.h"
#include "CAnnonce.h"
#include "CDiagNewDonne.h"
#include "CDonne.h"


// Boîte de dialogue CDonne

IMPLEMENT_DYNAMIC(CDiagDonne, CDialogEx)

CDiagDonne::CDiagDonne(CPartie *laP,CJoueur * lesJoueurs[],CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAROTMFC_DONNE, pParent)
	, int_jprise(0)
	, int_prise(0)
	, nom_joueur(_T(""))
{
	laPartie=laP;
	for (int i = 0; i < 4; i++)
	{
		this->lesJoueurs[i] = lesJoueurs[i];
	}
}

CDiagDonne::~CDiagDonne()
{

}

void CDiagDonne::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_CBIndex(pDX, IDC_COMBO1, int_jprise);
	DDX_CBIndex(pDX, IDC_COMBO2, int_prise);
	DDX_Text(pDX, IDC_EDIT1, nom_joueur);
}


BEGIN_MESSAGE_MAP(CDiagDonne, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CDiagDonne::JPriseChange)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CDiagDonne::PriseChange)
	ON_BN_CLICKED(IDOK, &CDiagDonne::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &CDiagDonne::Redistribuer)
END_MESSAGE_MAP()


// Gestionnaires de messages de CDonne


void CDiagDonne::JPriseChange()
{
	UpdateData(true);
	//à finir
	switch (int_jprise)
	{
	case 0:
		nom_joueur = "Personne";
		GetDlgItem(IDC_BUTTON1)->ShowWindow(SW_SHOW);
		break;
	case 1:
		nom_joueur = "Joueur 1";		
		break;
	case 2:
		nom_joueur = "Joueur 2";
		break;
	case 3:
		nom_joueur = "Joueur 3";
		break;
	case 4:
		nom_joueur = "Joueur 4";
		break;
	}
	UpdateData(false);
}


void CDiagDonne::PriseChange()
{

	UpdateData(true);
	switch (int_prise)
	{
	case 0:
		typ_ctr = prise;
		break;
	case 1:
		typ_ctr = garde;
		break;
	case 2:
		typ_ctr = garde_sans;
		break;
	case 3:
		typ_ctr = garde_contre;
		break;
	}
	laPartie->SetContrat(lesJoueurs[int_jprise - 1], typ_ctr, lesD);
}

void CDiagDonne::OnBnClickedOk()
{
	CAnnonce dlg(laPartie,lesJoueurs);
	PostMessage(WM_KEYDOWN, VK_ACCEPT, 0);
	dlg.DoModal();
	CDialogEx::OnOK();
}


void CDiagDonne::SetDefenseur(int int_jprise, CJoueur lesJoueurs[])
{
	switch (int_jprise)
	{
	case 1:
		lesD[0] = &lesJoueurs[1];
		lesD[1] = &lesJoueurs[2];
		lesD[2] = &lesJoueurs[3];
		break;
	case 2:
		lesD[0] = &lesJoueurs[0];
		lesD[1] = &lesJoueurs[2];
		lesD[2] = &lesJoueurs[3];
		break;
	case 3:
		lesD[0] = &lesJoueurs[0];
		lesD[1] = &lesJoueurs[1];
		lesD[2] = &lesJoueurs[3];
		break;
	case 4:
		lesD[0] = &lesJoueurs[0];
		lesD[1] = &lesJoueurs[1];
		lesD[2] = &lesJoueurs[2];
		break;
	}
}

void CDiagDonne::Redistribuer()
{
	CDiagNewDonne dlg(laPartie,lesJoueurs);
	PostMessage(WM_KEYDOWN, VK_ACCEPT, 0);
	dlg.DoModal();
}
