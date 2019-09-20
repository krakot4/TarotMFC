// CDiagDonne.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CDiagDonne.h"
#include "afxdialogex.h"


// Boîte de dialogue CDonne

IMPLEMENT_DYNAMIC(CDiagDonne, CDialogEx)

CDiagDonne::CDiagDonne(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAROTMFC_DONNE, pParent)
{

}

CDiagDonne::~CDiagDonne()
{
}

void CDiagDonne::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDiagDonne, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CDiagDonne::OnCbnSelchangeCombo1)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CDiagDonne::OnCbnSelchangeCombo2)
	ON_EN_CHANGE(IDC_EDIT1, &CDiagDonne::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &CDiagDonne::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CDiagDonne::OnBnClickedCancel)
END_MESSAGE_MAP()


// Gestionnaires de messages de CDonne


void CDiagDonne::OnCbnSelchangeCombo1()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CDiagDonne::OnCbnSelchangeCombo2()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CDiagDonne::OnEnChangeEdit1()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CDiagDonne::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnOK();
}


void CDiagDonne::OnBnClickedCancel()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnCancel();
}
