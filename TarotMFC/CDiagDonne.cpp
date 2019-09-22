// CDiagDonne.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CDiagDonne.h"
#include "afxdialogex.h"
#include "CAnnonce.h"


// Boîte de dialogue CDonne

IMPLEMENT_DYNAMIC(CDiagDonne, CDialogEx)

CDiagDonne::CDiagDonne(CPartie *laP,CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAROTMFC_DONNE, pParent)
	, int_jprise(0)
	, int_prise(0)
{
	laPartie=laP;
}

CDiagDonne::~CDiagDonne()
{

}

void CDiagDonne::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_CBIndex(pDX, IDC_COMBO1, int_jprise);
	DDX_CBIndex(pDX, IDC_COMBO2, int_prise);
}


BEGIN_MESSAGE_MAP(CDiagDonne, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CDiagDonne::JPriseChange)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CDiagDonne::PriseChange)
	ON_BN_CLICKED(IDOK, &CDiagDonne::OnBnClickedOk)
END_MESSAGE_MAP()


// Gestionnaires de messages de CDonne


void CDiagDonne::JPriseChange()
{
	UpdateData(true);
	//à finir
	switch (int_jprise)
	{
	case 0:
		
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	}
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
}

void CDiagDonne::OnBnClickedOk()
{
	CAnnonce dlg(laPartie);
	dlg.DoModal();
	CDialogEx::OnOK();
}
