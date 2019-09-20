// CScore.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CScore.h"
#include "afxdialogex.h"
#include "CPartie.h"



// Boîte de dialogue CScore

IMPLEMENT_DYNAMIC(CScore, CDialogEx)

CScore::CScore(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TARROTMFC_SCORE, pParent)
	, nomJoueur1(_T(""))
	, nomJoueur2(_T(""))
	, nomJoueur3(_T(""))
	, nomJoueur4(_T(""))
	, score1(_T(""))
	, score2(_T(""))
	, score3(_T(""))
	, score4(_T(""))
{

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

void CScore::afficherNom(CJoueur lesJoueurs[])
{
	nomJoueur1 = lesJoueurs[0];
}


BEGIN_MESSAGE_MAP(CScore, CDialogEx)
END_MESSAGE_MAP()


// Gestionnaires de messages de CScore
