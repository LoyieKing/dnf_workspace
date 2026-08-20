# CheckItem

`_ZN13user_creature12CCreatureMgr9CheckItemEP5CUserP10Inven_ItemRb`

`user_creature::CCreatureMgr::CheckItem(CUser*, Inven_Item*, bool&)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833c240` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833c240  _ZN13user_creature12CCreatureMgr9CheckItemEP5CUserP10Inven_ItemRb
#           user_creature::CCreatureMgr::CheckItem(CUser*, Inven_Item*, bool&)
# range [0x0833c240, 0x0833c289]
0833c240 +0x00:  push   %ebp
0833c241 +0x01:  mov    %esp,%ebp
0833c243 +0x03:  sub    $0x18,%esp
0833c246 +0x06:  mov    0x14(%ebp),%eax
0833c249 +0x09:  movb   $0x1,(%eax)
0833c24c +0x0c:  mov    0x10(%ebp),%eax
0833c24f +0x0f:  movzbl 0x1(%eax),%eax
0833c253 +0x13:  cmp    $0x7,%al
0833c255 +0x15:  jne    0833c283 <+0x43>
0833c257 +0x17:  mov    0x10(%ebp),%eax
0833c25a +0x1a:  mov    0x2(%eax),%eax
0833c25d +0x1d:  cmp    $0x1a,%eax
0833c260 +0x20:  jne    0833c283 <+0x43>
0833c262 +0x22:  mov    0x14(%ebp),%eax
0833c265 +0x25:  movb   $0x0,(%eax)
0833c268 +0x28:  mov    0x10(%ebp),%eax
0833c26b +0x2b:  mov    %eax,0x8(%esp)
0833c26f +0x2f:  mov    0xc(%ebp),%eax
0833c272 +0x32:  mov    %eax,0x4(%esp)
0833c276 +0x36:  mov    0x8(%ebp),%eax
0833c279 +0x39:  mov    %eax,(%esp)
0833c27c +0x3c:  call   0833c00c <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item>  ; user_creature::CCreatureMgr::SetKeepRightItem(CUser*, Inven_Item*)
0833c281 +0x41:  jmp    0833c288 <+0x48>
0833c283 +0x43:  mov    $0x1,%eax
0833c288 +0x48:  leave
0833c289 +0x49:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::CheckItem @ 0x833c240

/* user_creature::CCreatureMgr::CheckItem(CUser*, Inven_Item*, bool&) */

undefined4 __thiscall
user_creature::CCreatureMgr::CheckItem
          (CCreatureMgr *this,CUser *param_1,Inven_Item *param_2,bool *param_3)

{
  undefined4 uVar1;
  
  *param_3 = true;
  if ((param_2[1] == (Inven_Item)0x7) && (*(int *)(param_2 + 2) == 0x1a)) {
    *param_3 = false;
    uVar1 = SetKeepRightItem(this,param_1,param_2);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
