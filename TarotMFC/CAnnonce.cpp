// CAnnonce.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CAnnonce.h"
#include "afxdialogex.h"
#include "CPoints.h"
#include "CPartie.h"
#include "CDonne.h"


// Boîte de dialogue CAnnonce

IMPLEMENT_DYNAMIC(CAnnonce, CDialogEx)

CAnnonce::CAnnonce(CPartie * laP, CJoueur * lesJoueurs[], CWnd* pParent)/*=NULL*/
	: CDialogEx(IDD_TAROTMFC_ANNONCE, pParent)
	, int_pgn(0)
	, int_cmp(0)
	, int_camp_pgn(0)
{
	laPartie = laP;
	for (int i = 0; i < 4; i++)
		this->lesJoueurs[i] = lesJoueurs[i];
}

CAnnonce::~CAnnonce()
{
}

void CAnnonce::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_CBIndex(pDX, IDC_COMBO1, int_pgn);
	DDX_CBIndex(pDX, IDC_COMBO2, int_cmp);
	DDX_CBIndex(pDX, IDC_COMBO3, int_camp_pgn);
}


BEGIN_MESSAGE_MAP(CAnnonce, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CAnnonce::PoigneeChange)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CAnnonce::CampChange)
	ON_BN_CLICKED(IDOK, &CAnnonce::OnBnClickedOk)
	ON_CBN_SELCHANGE(IDC_COMBO3, &CAnnonce::CampPoigneeChange)
END_MESSAGE_MAP()


// Gestionnaires de messages de CAnnonce


void CAnnonce::PoigneeChange()
{
	UpdateData(true);
	GetDlgItem(IDC_COMBO3)->ShowWindow(SW_SHOW);
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
		laPartie->SetPetitAuBout(cmp_bout);
		break;
	case 1:
		cmp_bout = preneur;
		laPartie->SetPetitAuBout(cmp_bout);
		break;
	case 2:
		cmp_bout = defenseur;
		laPartie->SetPetitAuBout(cmp_bout);
		break;
	}
}


void CAnnonce::OnBnClickedOk()
{
	CPoints dlg(laPartie, lesJoueurs);
	PostMessage(WM_KEYDOWN, VK_ACCEPT, 0);
	dlg.DoModal();
	CDialogEx::OnOK();
}


void CAnnonce::CampPoigneeChange()
{
	UpdateData(true);
	switch (int_camp_pgn)
	{
	case 0:
		cmp_pgn = personne;
		laPartie->SetPoignee(cmp_pgn, pgn);
		break;
	case 1:
		cmp_pgn = preneur;
		laPartie->SetPoignee(cmp_pgn, pgn);
		break;
	case 2:
		cmp_pgn = defenseur;
		laPartie->SetPoignee(cmp_pgn, pgn);
		break;
	}
}