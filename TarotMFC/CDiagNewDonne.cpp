// CDiagNewDonn.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TarotMFC.h"
#include "CDiagNewDonne.h"
#include "afxdialogex.h"


// Boîte de dialogue CDiagNewDonne

IMPLEMENT_DYNAMIC(CDiagNewDonne, CDialogEx)

CDiagNewDonne::CDiagNewDonne(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAROTMFC_NEWDONNE, pParent)
{

}

CDiagNewDonne::~CDiagNewDonne()
{
}

void CDiagNewDonne::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDiagNewDonne, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDiagNewDonne::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CDiagNewDonne::OnBnClickedCancel)
END_MESSAGE_MAP()


// Gestionnaires de messages de CDiagNewDonne


void CDiagNewDonne::OnBnClickedOk()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnOK();
}


void CDiagNewDonne::OnBnClickedCancel()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	CDialogEx::OnCancel();
}
