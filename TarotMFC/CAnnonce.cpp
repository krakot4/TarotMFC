// CAnnonce.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CAnnonce.h"
#include "afxdialogex.h"
#include "CPoints.h"


// Boîte de dialogue CAnnonce

IMPLEMENT_DYNAMIC(CAnnonce, CDialogEx)

CAnnonce::CAnnonce(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAROTMFC_ANNONCE, pParent)
	, int_pgn(0)
	, int_cmp(0)
{

}

CAnnonce::~CAnnonce()
{
}

void CAnnonce::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_CBIndex(pDX, IDC_COMBO1, int_pgn);
	DDX_CBIndex(pDX, IDC_COMBO2, int_cmp);
}


BEGIN_MESSAGE_MAP(CAnnonce, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CAnnonce::PoigneeChange)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CAnnonce::CampChange)
	ON_BN_CLICKED(IDOK, &CAnnonce::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CAnnonce::OnBnClickedCancel)
END_MESSAGE_MAP()


// Gestionnaires de messages de CAnnonce


void CAnnonce::PoigneeChange()
{
	UpdateData(true);
	switch (int_pgn)
	{
	case 0:
		pgn = non;
		break;
	case 1:
		pgn = simple;
		break;
	case 2:
		pgn = doublee;
		break;
	case 3:
		pgn = triplee;
		break;
	}
}


void CAnnonce::CampChange()
{
	UpdateData(true);
	switch (int_cmp)
	{
	case 0:
		cmp_bout = personne;
		break;
	case 1:
		cmp_bout = preneur;
		break;
	case 2:
		cmp_bout = defenseur;
		break;
	}
}


void CAnnonce::OnBnClickedOk()
{
	CPoints dlg;
	dlg.DoModal();
	CDialogEx::OnOK();
}


void CAnnonce::OnBnClickedCancel()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnCancel();
}
