# insert_item

`_ZN4CMap11insert_itemEiiii`

`CMap::insert_item(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CMap` | `0x0834eb94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834eb94  _ZN4CMap11insert_itemEiiii
#           CMap::insert_item(int, int, int, int)
# range [0x0834eb94, 0x0834ebd9]
0834eb94 +0x00:  push   %ebp
0834eb95 +0x01:  mov    %esp,%ebp
0834eb97 +0x03:  sub    $0x28,%esp
0834eb9a +0x06:  lea    -0x18(%ebp),%eax
0834eb9d +0x09:  mov    %eax,(%esp)
0834eba0 +0x0c:  call   0815088e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c3
0834eba5 +0x11:  mov    0xc(%ebp),%eax
0834eba8 +0x14:  mov    %eax,-0x18(%ebp)
0834ebab +0x17:  mov    0x10(%ebp),%eax
0834ebae +0x1a:  mov    %eax,-0x14(%ebp)
0834ebb1 +0x1d:  mov    0x14(%ebp),%eax
0834ebb4 +0x20:  mov    %eax,-0x10(%ebp)
0834ebb7 +0x23:  mov    0x18(%ebp),%eax
0834ebba +0x26:  mov    %eax,-0xc(%ebp)
0834ebbd +0x29:  mov    0x8(%ebp),%eax
0834ebc0 +0x2c:  lea    0x1c(%eax),%edx
0834ebc3 +0x2f:  lea    -0x18(%ebp),%eax
0834ebc6 +0x32:  mov    %eax,0x4(%esp)
0834ebca +0x36:  mov    %edx,(%esp)
0834ebcd +0x39:  call   08154462 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x3d97>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x3d97
0834ebd2 +0x3e:  mov    $0x1,%eax
0834ebd7 +0x43:  leave
0834ebd8 +0x44:  ret
0834ebd9 +0x45:  nop
```

## 反编译 C

```c
// CMap::insert_item @ 0x834eb94

/* CMap::insert_item(int, int, int, int) */

undefined4 __thiscall CMap::insert_item(CMap *this,int param_1,int param_2,int param_3,int param_4)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  _mapItem::_mapItem((_mapItem *)&local_1c);
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  std::list<_mapItem,std::allocator<_mapItem>>::push_back
            ((list<_mapItem,std::allocator<_mapItem>> *)(this + 0x1c),(_mapItem *)&local_1c);
  return 1;
}
```
