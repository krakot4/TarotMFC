// CPoints.cpp : fichier d'implémentation
//
#include "stdafx.h"
//#include "pch.h"
#include "TarotMFC.h"
#include "CPoints.h"
#include "afxdialogex.h"


// boîte de dialogue de CPoints

IMPLEMENT_DYNAMIC(CPoints, CDialogEx)

CPoints::CPoints(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TAROTMFC_POINTS, pParent)
	, bouts_preneur(0)
	, pts_a_faire(0)
	, pts_preneur(0)
	, pts_donne(0)
{

}

CPoints::~CPoints()
{
}

void CPoints::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_CBIndex(pDX, IDC_COMBO1, bouts_preneur);
	DDV_MinMaxInt(pDX, bouts_preneur, 0, 3);
	DDX_Text(pDX, IDC_EDIT1, pts_a_faire);
	DDX_Text(pDX, IDC_EDIT2, pts_preneur);
	DDV_MinMaxInt(pDX, pts_preneur, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT3, pts_donne);
}


BEGIN_MESSAGE_MAP(CPoints, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CPoints::BoutEntre)
	ON_EN_CHANGE(IDC_EDIT2, &CPoints::PointsChange)
	ON_BN_CLICKED(IDOK, &CPoints::OnBnClickedOk)
END_MESSAGE_MAP()


// gestionnaires de messages de CPoints


void CPoints::BoutEntre()
{
	UpdateData(true);
	switch (bouts_preneur)
	{
	case 0:
		pts_a_faire = 56;
		break;
	case 1:
		pts_a_faire = 51;
		break;
	case 2:
		pts_a_faire = 41;
		break;
	case 3:
		pts_a_faire = 36;
		break;
	}
	UpdateData(false);
}


void CPoints::PointsChange()
{
	UpdateData(true);

}


void CPoints::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnOK();
}
