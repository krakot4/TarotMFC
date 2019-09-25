#pragma once
#include "CJoueur.h"
#define WM_MYMESSAGE (WM_USER + 100)

// Boîte de dialogue CScore

class CScore : public CDialogEx
{
	DECLARE_DYNAMIC(CScore)

public:
	CScore(CJoueur *[],CWnd* pParent = NULL);   // constructeur standard
	virtual ~CScore();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TARROTMFC_SCORE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
private:
	CString nomJoueur1;
	CString nomJoueur2;
	CString nomJoueur3;
	CString nomJoueur4;
	int score1;
	int score2;
	int score3;
	int score4;
public:
	void afficherNom();
	void afficherScore();
private:
	CJoueur *nomJoueur[4];
public:
	afx_msg LRESULT OnMyMessage(WPARAM wParam, LPARAM lParam);
	
};
