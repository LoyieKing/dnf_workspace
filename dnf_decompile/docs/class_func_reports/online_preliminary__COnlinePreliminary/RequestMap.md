# RequestMap

`_ZN18online_preliminary18COnlinePreliminary10RequestMapERsR15PVP_BATTLE_MODE`

`online_preliminary::COnlinePreliminary::RequestMap(short&, PVP_BATTLE_MODE&)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085608f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085608f2  _ZN18online_preliminary18COnlinePreliminary10RequestMapERsR15PVP_BATTLE_MODE
#           online_preliminary::COnlinePreliminary::RequestMap(short&, PVP_BATTLE_MODE&)
# range [0x085608f2, 0x0856091f]
085608f2 +0x00:  push   %ebp
085608f3 +0x01:  mov    %esp,%ebp
085608f5 +0x03:  sub    $0x18,%esp
085608f8 +0x06:  mov    0xc(%ebp),%eax
085608fb +0x09:  movw   $0x0,(%eax)
08560900 +0x0e:  mov    0x10(%ebp),%eax
08560903 +0x11:  mov    (%eax),%eax
08560905 +0x13:  cmp    $0x6,%eax
08560908 +0x16:  je     0856091e <+0x2c>
0856090a +0x18:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0856090f +0x1d:  mov    %eax,(%esp)
08560912 +0x20:  call   0844d4ae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xc4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xc4
08560917 +0x25:  mov    %eax,%edx
08560919 +0x27:  mov    0x10(%ebp),%eax
0856091c +0x2a:  mov    %edx,(%eax)
0856091e +0x2c:  leave
0856091f +0x2d:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::RequestMap @ 0x85608f2

/* online_preliminary::COnlinePreliminary::RequestMap(short&, PVP_BATTLE_MODE&) */

void __thiscall
online_preliminary::COnlinePreliminary::RequestMap
          (COnlinePreliminary *this,short *param_1,PVP_BATTLE_MODE *param_2)

{
  CDataManager *this_00;
  undefined4 uVar1;
  
  *param_1 = 0;
  if (*(int *)param_2 != 6) {
    this_00 = (CDataManager *)G_CDataManager();
    uVar1 = CDataManager::GetPvPMode(this_00);
    *(undefined4 *)param_2 = uVar1;
  }
  return;
}
```
