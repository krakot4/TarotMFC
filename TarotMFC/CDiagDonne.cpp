// CDiagDonne.cpp�: fichier d'impl�mentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CDiagDonne.h"
#include "afxdialogex.h"


// Bo�te de dialogue CDonne

IMPLEMENT_DYNAMIC(CDonne, CDialogEx)

CDonne::CDonne(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAROTMFC_DONNE, pParent)
{

}

CDonne::~CDonne()
{
}

void CDonne::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDonne, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CDonne::OnCbnSelchangeCombo1)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CDonne::OnCbnSelchangeCombo2)
	ON_EN_CHANGE(IDC_EDIT1, &CDonne::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &CDonne::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CDonne::OnBnClickedCancel)
END_MESSAGE_MAP()


// Gestionnaires de messages de CDonne


void CDonne::OnCbnSelchangeCombo1()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
}


void CDonne::OnCbnSelchangeCombo2()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
}


void CDonne::OnEnChangeEdit1()
{
	// TODO:  S'il s'agit d'un contr�le RICHEDIT, le contr�le ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajout� au masque gr�ce � l'op�rateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contr�le
}


void CDonne::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
	CDialogEx::OnOK();
}


void CDonne::OnBnClickedCancel()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
	CDialogEx::OnCancel();
}
