//Knight.cpp

#include "Knight.h"

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
	if((position->GetCol() == pos.GetCol() - 2) && (position->GetRow() == pos.GetRow() - 1))
		return true;
	else
		if((position->GetCol() == pos.GetCol() - 2) && (position->GetRow() == pos.GetRow() + 1))
			return true;
		else
				if((position->GetCol() == pos.GetCol() + 2) && (position->GetRow() == pos.GetRow() - 1))
					return true;
				else
						if((position->GetCol() == pos.GetCol() + 2) && (position->GetRow() == pos.GetRow() + 1))
							return true;
						else
								if((position->GetCol() == pos.GetCol() - 1) && (position->GetRow() == pos.GetRow() - 2))
									return true;
								else
										if((position->GetCol() == pos.GetCol() + 1) && (position->GetRow() == pos.GetRow() - 2))
											return true;
										else
												if((position->GetCol() == pos.GetCol() - 1) && (position->GetRow() == pos.GetRow() + 2))
													return true;
												else
														if((position->GetCol() == pos.GetCol() + 1) && (position->GetRow() == pos.GetRow() + 2))
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
	moves.push_back(position);
	while(!(board.BoardFull()))
	{
		if((position->GetCol() - 2 > 0) && (position->GetRow() - 1 > 0) && CanMoveToCell(*board.GetBoardCell(position->GetCol() - 2 , position->GetRow() - 1)))
		{
			Move(*board.GetBoardCell(position->GetCol() - 2 , position->GetRow() - 1));
			moves.push_back(position);
		}
		else
		{
			if((position->GetCol() - 2 > 0) && (position->GetRow() + 1 <= 8) && CanMoveToCell(*board.GetBoardCell(position->GetCol() - 2 , position->GetRow() + 1)))
			{
				Move(*board.GetBoardCell(position->GetCol() - 2 , position->GetRow() + 1));
				moves.push_back(position);
			}
			else
			{
				if((position->GetCol() + 2 <= 8) && (position->GetRow() - 1 > 0) && CanMoveToCell(*board.GetBoardCell(position->GetCol() + 2 , position->GetRow() - 1)))
				{
					Move(*board.GetBoardCell(position->GetCol() + 2 , position->GetRow() - 1));
					moves.push_back(position);
				}
				else
				{
					if((position->GetCol() + 2 <= 8) && (position->GetRow() + 1 <=8) && CanMoveToCell(*board.GetBoardCell(position->GetCol() + 2 , position->GetRow() + 1)))
					{
						Move(*board.GetBoardCell(position->GetCol() + 2 , position->GetRow() + 1));
						moves.push_back(position);
					}
					else
					{
						if((position->GetCol() - 1 > 0) && (position->GetRow() - 2 > 0) && CanMoveToCell(*board.GetBoardCell(position->GetCol() - 1 , position->GetRow() - 2)))
						{
							Move(*board.GetBoardCell(position->GetCol() - 1 , position->GetRow() - 2));
							moves.push_back(position);
						}
						else
						{
							if((position->GetCol() - 1 > 0) && (position->GetRow() + 2 <= 8) && CanMoveToCell(*board.GetBoardCell(position->GetCol() - 1 , position->GetRow() + 2)))
							{
								Move(*board.GetBoardCell(position->GetCol() - 1 , position->GetRow() + 2));
								moves.push_back(position);
							}
							else
							{
								if((position->GetCol() + 1 <= 8) && (position->GetRow() - 2 > 0) && CanMoveToCell(*board.GetBoardCell(position->GetCol() + 1 , position->GetRow() - 2)))
								{
									Move(*board.GetBoardCell(position->GetCol() + 1 , position->GetRow() - 2));
									moves.push_back(position);
								}
								else
								{
									if((position->GetCol() + 1 <= 8) && (position->GetRow() + 2 <=8) && CanMoveToCell(*board.GetBoardCell(position->GetCol() + 1 , position->GetRow() + 2)))
									{
										Move(*board.GetBoardCell(position->GetCol() + 1 , position->GetRow() + 2));
										moves.push_back(position);
									}
									else
									{
										moves.pop_back();
									}
								}
							}
						}
					}
				}
			}
		}
		if(IsTherClosedCell())
			moves.pop_back();
	}
}

Knight::Knight(int _col , int _row)
{
	position = board.GetBoardCell(_col , _row);
}

void Knight::Show()
{
	for(int i = 0 ; i < moves.size() ; ++i)
	{
		cout<<moves[i]->GetCol()<<"  "<<moves[i]->GetRow()<<endl;
	};

	cout<<endl;
}

Knight :: ~Knight()
{
//
}



