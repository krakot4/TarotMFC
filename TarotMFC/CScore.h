#pragma once


// Boîte de dialogue CScore

class CScore : public CDialogEx
{
	DECLARE_DYNAMIC(CScore)

public:
	CScore(CWnd* pParent = NULL);   // constructeur standard
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
	CString score1;
	CString score2;
	CString score3;
	CString score4;
public:
	void afficherNom(CJoueur lesJoueurs[]);
};
