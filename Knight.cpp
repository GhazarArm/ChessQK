#include"Knight.h"
#include <stdlib.h>

void Knight::Move(Position& pos)
{
	if(pos.FreeOrNot() && CanMoveToCell(pos))
	{
		position = &pos;
		position->ChangePositionSituation();
	}
}

bool Knight::CanMoveToCell(Position& pos)
{
	if((position->GetCol() == pos.GetCol() - 2) && (position->GetRow() == pos.GetRow() - 1) && (pos.FreeOrNot() == true))
		return true;
	else
		if((position->GetCol() == pos.GetCol() - 2) && (position->GetRow() == pos.GetRow() + 1) && (pos.FreeOrNot() == true))
			return true;
		else
				if((position->GetCol() == pos.GetCol() + 2) && (position->GetRow() == pos.GetRow() - 1) && (pos.FreeOrNot() == true))
					return true;
				else
						if((position->GetCol() == pos.GetCol() + 2) && (position->GetRow() == pos.GetRow() + 1) && (pos.FreeOrNot() == true))
							return true; 
						else
								if((position->GetCol() == pos.GetCol() - 1) && (position->GetRow() == pos.GetRow() - 2) && (pos.FreeOrNot() == true))
									return true;
								else
										if((position->GetCol() == pos.GetCol() + 1) && (position->GetRow() == pos.GetRow() - 2) && (pos.FreeOrNot() == true))
											return true;
										else
												if((position->GetCol() == pos.GetCol() - 1) && (position->GetRow() == pos.GetRow() + 2) && (pos.FreeOrNot() == true))
													return true;
												else
														if((position->GetCol() == pos.GetCol() + 1) && (position->GetRow() == pos.GetRow() + 2) && (pos.FreeOrNot() == true))
															return true;
	return false;
};


bool Knight::IsTherClosedCell()
{
	for(int i = 1 ; i <= 8 ; ++i)
	{
		for(int j = 1 ; j <= 8 ; ++j)
		{
			if(board.GetBoardCell(i , j)->FreeOrNot())
			{
				if((i - 2 > 0) && (j - 1 > 0) && board.GetBoardCell(i - 2 , j - 1)->FreeOrNot() == true)
					return false;
				else
					if((i - 2 > 0) && (j + 1 <= 8) && board.GetBoardCell(i - 2 , j + 1)->FreeOrNot() == true)
						return false;
					else
						if((i + 2 <= 8) && (j - 1 > 0) && board.GetBoardCell(i + 2 , j - 1)->FreeOrNot() == true)
							return false;
						else
							if((i + 2 <= 8) && (j + 1 <= 8) && board.GetBoardCell(i + 2 , j + 1)->FreeOrNot() == true)
								return false;
							else
								if((i - 1 > 0) && (j - 2 > 0) && board.GetBoardCell(i - 1 , j - 2)->FreeOrNot() == true)
									return false;
								else
									if((i - 1 > 0) && (j + 2 <= 8) && board.GetBoardCell(i - 1 , j + 2)->FreeOrNot() == true)
										return false;
									else
										if((i + 1 <= 8) && (j - 2 > 0) && board.GetBoardCell(i + 1 , j - 2)->FreeOrNot() == true)
											return false;
										else
											if((i + 1 <= 8) && (j + 2 <= 8) && board.GetBoardCell(i + 1 , j + 2)->FreeOrNot() == true)
												return false;
											else
												return true;
			}
		}
	}
};



void Knight::Problem()
{
	bool this_move_is_true = true;
	int last_move = 0;
	moves.push_back(position);
	while(!(board.BoardFull()))
	{
		system("cls");//clear window
		Show();
		cin.ignore();
		
		if((last_move != 1 || this_move_is_true == true) && (position->GetCol() - 2 > 0) && (position->GetRow() - 1 > 0) && CanMoveToCell(*board.GetBoardCell(position->GetCol() - 2 , position->GetRow() - 1)))
		{
			Move(*board.GetBoardCell(position->GetCol() - 2 , position->GetRow() - 1));
			moves.push_back(position);
			last_move = 1;
			this_move_is_true = true;
		}
		else
		{
			if((last_move != 2 || this_move_is_true == true) && (position->GetCol() - 2 > 0) && (position->GetRow() + 1 <= 8) && CanMoveToCell(*board.GetBoardCell(position->GetCol() - 2 , position->GetRow() + 1)))
			{
				Move(*board.GetBoardCell(position->GetCol() - 2 , position->GetRow() + 1));
				moves.push_back(position);
				last_move = 2;
				this_move_is_true = true;
			}
			else
			{
				if((last_move != 3 || this_move_is_true == true) && (position->GetCol() + 2 <= 8) && (position->GetRow() - 1 > 0) && CanMoveToCell(*board.GetBoardCell(position->GetCol() + 2 , position->GetRow() - 1)))
				{
					Move(*board.GetBoardCell(position->GetCol() + 2 , position->GetRow() - 1));
					moves.push_back(position);
					last_move = 3;
					this_move_is_true = true;
				}
				else
				{
					if((last_move != 4 || this_move_is_true == true) && (position->GetCol() + 2 <= 8) && (position->GetRow() + 1 <=8) && CanMoveToCell(*board.GetBoardCell(position->GetCol() + 2 , position->GetRow() + 1)))
					{
						Move(*board.GetBoardCell(position->GetCol() + 2 , position->GetRow() + 1));
						moves.push_back(position);
						last_move = 4;
						this_move_is_true = true;
					}
					else
					{
						if((last_move != 5 || this_move_is_true == true) && (position->GetCol() - 1 > 0) && (position->GetRow() - 2 > 0) && CanMoveToCell(*board.GetBoardCell(position->GetCol() - 1 , position->GetRow() - 2)))
						{
							Move(*board.GetBoardCell(position->GetCol() - 1 , position->GetRow() - 2));
							moves.push_back(position);
							last_move = 5;
							this_move_is_true = true;
						}
						else
						{
							if((last_move != 6 || this_move_is_true == true) && (position->GetCol() - 1 > 0) && (position->GetRow() + 2 <= 8) && CanMoveToCell(*board.GetBoardCell(position->GetCol() - 1 , position->GetRow() + 2)))
							{
								Move(*board.GetBoardCell(position->GetCol() - 1 , position->GetRow() + 2));
								moves.push_back(position);
								last_move = 6;
								this_move_is_true = true;
							}
							else
							{
								if((last_move != 7 || this_move_is_true == true) && (position->GetCol() + 1 <= 8) && (position->GetRow() - 2 > 0) && CanMoveToCell(*board.GetBoardCell(position->GetCol() + 1 , position->GetRow() - 2)))
								{
									Move(*board.GetBoardCell(position->GetCol() + 1 , position->GetRow() - 2));
									moves.push_back(position);
									last_move = 7;
									this_move_is_true = true;
								}
								else
								{
									if((last_move != 8 || this_move_is_true == true) && (position->GetCol() + 1 <= 8) && (position->GetRow() + 2 <=8) && CanMoveToCell(*board.GetBoardCell(position->GetCol() + 1 , position->GetRow() + 2)))
									{
										Move(*board.GetBoardCell(position->GetCol() + 1 , position->GetRow() + 2));
										moves.push_back(position);
										last_move = 8;
										this_move_is_true = true;
									}
									else
									{
										position->ChangePositionSituation();
										moves[moves.size() - 1] = nullptr;
										moves.pop_back();
										position = moves[moves.size() - 1];
										this_move_is_true == false;
										continue;
									}
								}
							}
						}
					}
				}
			}
		}
		if(IsTherClosedCell())
		{
			position->ChangePositionSituation();
			moves[moves.size() - 1] = nullptr;
			moves.pop_back();
			position = moves[moves.size() - 1];
			this_move_is_true = false;
			continue;
		}
	}
}

Knight::Knight(int _col , int _row)
{
	position = board.GetBoardCell(_col , _row);
	position->ChangePositionSituation();
}


void Knight::Show()
{
	for(int i = 1 ; i <= 8 ; ++i)
	{
		for(int j = 1 ; j <= 8 ; ++j)
		{
			if(board.GetBoardCell(i , j)->FreeOrNot())
			{
				cout<<"f ";
			}
			else
			{
				if(board.GetBoardCell(i , j) == position)
				{
					cout<<"K ";
				}
				else
					cout<<"B ";
			}
		}
		cout<<endl;
	}

	cout<<endl;
}