// CScore.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CScore.h"
#include "afxdialogex.h"
#include "CPartie.h"



// Boîte de dialogue CScore

IMPLEMENT_DYNAMIC(CScore, CDialogEx)


CScore::CScore(CJoueur *lesJoueurs[],CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TARROTMFC_SCORE, pParent)
	, nomJoueur1(_T(""))
	, nomJoueur2(_T(""))
	, nomJoueur3(_T(""))
	, nomJoueur4(_T(""))
	, score1(0)
	, score2(0)
	, score3(0)
	, score4(0)
{
	for (int i = 0; i < 4; i++)
	{
		nomJoueur[i] = lesJoueurs[i];
	}

}

CScore::~CScore()
{
}


void CScore::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, ID_NOM_1, nomJoueur1);
	DDX_Text(pDX, ID_NOM_2, nomJoueur2);
	DDX_Text(pDX, ID_NOM_3, nomJoueur3);
	DDX_Text(pDX, ID_NOM_4, nomJoueur4);
	DDX_Text(pDX, ID_SCORE_1, score1);
	DDX_Text(pDX, ID_SCORE_2, score2);
	DDX_Text(pDX, ID_SCORE_3, score3);
	DDX_Text(pDX, ID_SCORE_4, score4);
}

void CScore::afficherNom()
{
	nomJoueur1 = CString(nomJoueur[0]->LireNom().c_str());
	nomJoueur2 = CString(nomJoueur[1]->LireNom().c_str());
	nomJoueur3 = CString(nomJoueur[2]->LireNom().c_str());
	nomJoueur4 = CString(nomJoueur[3]->LireNom().c_str());
	UpdateData(false);
}

void CScore::afficherScore()
{
	score1 = nomJoueur[0]->LireScore();
	score2 = nomJoueur[1]->LireScore();
	score3 = nomJoueur[2]->LireScore();
	score4 = nomJoueur[3]->LireScore();
	UpdateData(false);
}


BEGIN_MESSAGE_MAP(CScore, CDialogEx)
	ON_WM_ACTIVATE()
END_MESSAGE_MAP()


// Gestionnaires de messages de CScore



void CScore::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
{
	CDialogEx::OnActivate(nState, pWndOther, bMinimized);
	afficherNom();
	afficherScore();
	// TODO: ajoutez ici le code de votre gestionnaire de messages
}
