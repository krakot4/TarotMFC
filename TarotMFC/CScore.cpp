// CScore.cpp�: fichier d'impl�mentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CScore.h"
#include "afxdialogex.h"
#include "CNom.h"


// Bo�te de dialogue CScore

IMPLEMENT_DYNAMIC(CScore, CDialogEx)

CScore::CScore(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAROTMFC_SCORES, pParent)
{
	CNom dlg;
	dlg.DoModal();
}

CScore::~CScore()
{
}

void CScore::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CScore, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &CScore::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT3, &CScore::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT2, &CScore::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT4, &CScore::OnEnChangeEdit4)
END_MESSAGE_MAP()


// Gestionnaires de messages de CScore


void CScore::OnEnChangeEdit1()
{
	// TODO:  S'il s'agit d'un contr�le RICHEDIT, le contr�le ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajout� au masque gr�ce � l'op�rateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contr�le
}


void CScore::OnEnChangeEdit3()
{
	// TODO:  S'il s'agit d'un contr�le RICHEDIT, le contr�le ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajout� au masque gr�ce � l'op�rateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contr�le
}


void CScore::OnEnChangeEdit2()
{
	// TODO:  S'il s'agit d'un contr�le RICHEDIT, le contr�le ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajout� au masque gr�ce � l'op�rateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contr�le
}


void CScore::OnEnChangeEdit4()
{
	// TODO:  S'il s'agit d'un contr�le RICHEDIT, le contr�le ne
	// envoyez cette notification sauf si vous substituez CDialogEx::OnInitDialog()
	// fonction et appelle CRichEditCtrl().SetEventMask()
	// avec l'indicateur ENM_CHANGE ajout� au masque gr�ce � l'op�rateur OR.

	// TODO:  Ajoutez ici le code de votre gestionnaire de notification de contr�le
}
