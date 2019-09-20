#include "stdafx.h"
#include "TarotMFC.h"
#include "CPoints.h"
#include "CDonne.h"
#include "CPartie.h"
#include "afxdialogex.h"

// Boîte de dialogue CPoints

IMPLEMENT_DYNAMIC(CPoints, CDialogEx)

CPoints::CPoints(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAROTMFC_POINTS, pParent)
	, bouts(0)
{

}

CPoints::~CPoints()
{
}

void CPoints::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_CBIndex(pDX, IDC_COMBO2, bouts);
	DDV_MinMaxInt(pDX, bouts, 0, 3);
}


BEGIN_MESSAGE_MAP(CPoints, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CPoints::OnCbnSelchangeCombo2)
	ON_EN_CHANGE(IDC_EDIT2, &CPoints::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT1, &CPoints::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT3, &CPoints::OnEnChangeEdit3)
	ON_BN_CLICKED(IDOK, &CPoints::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CPoints::OnBnClickedCancel)
END_MESSAGE_MAP()


// Gestionnaires de messages de CPoints


void CPoints::OnCbnSelchangeCombo2()
{
	UpdateData(true);
}


void CPoints::OnEnChangeEdit2()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CPoints::OnEnChangeEdit1()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CPoints::OnEnChangeEdit3()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CPoints::OnBnClickedOk()
{
	
	CDialogEx::OnOK();
}


void CPoints::OnBnClickedCancel()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnCancel();
}

void CPoints::SetNbBouts(int nb_bouts)
{
	bouts = nb_bouts;
}
