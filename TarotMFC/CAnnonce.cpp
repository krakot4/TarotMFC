// CAnnonce.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CAnnonce.h"
#include "afxdialogex.h"


// Boîte de dialogue CAnnonce

IMPLEMENT_DYNAMIC(CAnnonce, CDialogEx)

CAnnonce::CAnnonce(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAROTMFC_ANNONCE, pParent)
{

}

CAnnonce::~CAnnonce()
{
}

void CAnnonce::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAnnonce, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CAnnonce::OnCbnSelchangeCombo1)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CAnnonce::OnCbnSelchangeCombo2)
	ON_BN_CLICKED(IDOK, &CAnnonce::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CAnnonce::OnBnClickedCancel)
END_MESSAGE_MAP()


// Gestionnaires de messages de CAnnonce


void CAnnonce::OnCbnSelchangeCombo1()
{
	//CDialogEx::
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CAnnonce::OnCbnSelchangeCombo2()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CAnnonce::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnOK();
}


void CAnnonce::OnBnClickedCancel()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnCancel();
}
