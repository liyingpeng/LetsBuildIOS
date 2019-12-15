//
//  MyTableView.h
//  LetsBuildUITableView
//
//  Created by 李应鹏 on 2019/12/15.
//  Copyright © 2019 李应鹏. All rights reserved.
//

#import <UIKit/UIKit.h>

/*
需要解决两个问题
1. 如何复用cell
2. 一开始要知道总共的高度
3. 滚动时需要计算出新的布局，以及是否需要refresh cell
*/

NS_ASSUME_NONNULL_BEGIN

@interface MyTableView : UIScrollView

@end

NS_ASSUME_NONNULL_END
