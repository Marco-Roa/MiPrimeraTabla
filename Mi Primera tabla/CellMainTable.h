//
//  CellMainTable.h
//  Mi Primera tabla
//
//  Created by Marco Antonio Roa De La Cruz on 9/20/17.
//  Copyright © 2017 MarcoRoa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CellMainTable : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imgUser;
@property (weak, nonatomic) IBOutlet UILabel *labelName;
@property (weak, nonatomic) IBOutlet UILabel *labelAge;

@end
