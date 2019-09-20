// CNom.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CNom.h"
#include "afxdialogex.h"
#include "CDiagDonne.h"
#include "CPartie.h"


// Boîte de dialogue CNom

IMPLEMENT_DYNAMIC(CNom, CDialogEx)

CNom::CNom(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAROTMFC_NOM, pParent)
{

}

CNom::~CNom()
{
}

void CNom::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CNom, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &CNom::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &CNom::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &CNom::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &CNom::OnEnChangeEdit4)
	ON_BN_CLICKED(IDCANCEL, &CNom::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON1, &CNom::OnBnClickedButton1)
END_MESSAGE_MAP()


// Gestionnaires de messages de CNom


void CNom::OnEnChangeEdit1()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CNom::OnEnChangeEdit2()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CNom::OnEnChangeEdit3()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CNom::OnEnChangeEdit4()
{
	// TODO:  S'il s'agit d'un contrôle RICHEDIT, le contrôle ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajouté au masque grâce à l'opérateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CNom::OnBnClickedCancel()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnCancel();
}


void CNom::OnBnClickedButton1()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDiagDonne PremiereDonne(this);
	PremiereDonne.DoModal();
}