# gainWinPoint

`_ZN5CUser12gainWinPointEi12eWPAddReason`

`CUser::gainWinPoint(int, eWPAddReason)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864fd2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864fd2c  _ZN5CUser12gainWinPointEi12eWPAddReason
#           CUser::gainWinPoint(int, eWPAddReason)
# range [0x0864fd2c, 0x0864fd7f]
0864fd2c +0x00:  push   %ebp
0864fd2d +0x01:  mov    %esp,%ebp
0864fd2f +0x03:  sub    $0x18,%esp
0864fd32 +0x06:  cmpl   $0x0,0xc(%ebp)
0864fd36 +0x0a:  je     0864fd7d <+0x51>
0864fd38 +0x0c:  mov    0x8(%ebp),%eax
0864fd3b +0x0f:  mov    %eax,(%esp)
0864fd3e +0x12:  call   0822f16a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4814>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4814
0864fd43 +0x17:  mov    0x58(%eax),%edx
0864fd46 +0x1a:  add    0xc(%ebp),%edx
0864fd49 +0x1d:  mov    %edx,0x58(%eax)
0864fd4c +0x20:  mov    0x8(%ebp),%eax
0864fd4f +0x23:  mov    %eax,(%esp)
0864fd52 +0x26:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0864fd57 +0x2b:  mov    0x58(%eax),%eax
0864fd5a +0x2e:  mov    0x8(%ebp),%edx
0864fd5d +0x31:  lea    0x79700(%edx),%ecx
0864fd63 +0x37:  mov    0x10(%ebp),%edx
0864fd66 +0x3a:  mov    %edx,0xc(%esp)
0864fd6a +0x3e:  mov    0xc(%ebp),%edx
0864fd6d +0x41:  mov    %edx,0x8(%esp)
0864fd71 +0x45:  mov    %eax,0x4(%esp)
0864fd75 +0x49:  mov    %ecx,(%esp)
0864fd78 +0x4c:  call   08682c96 <_ZN15cUserHistoryLog5WPAddEii12eWPAddReason>  ; cUserHistoryLog::WPAdd(int, int, eWPAddReason)
0864fd7d +0x51:  leave
0864fd7e +0x52:  ret
0864fd7f +0x53:  nop
```

## 反编译 C

```c
// CUser::gainWinPoint @ 0x864fd2c

/* CUser::gainWinPoint(int, eWPAddReason) */

void __thiscall CUser::gainWinPoint(CUser *this,int param_1,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = CUserCharacInfo::getPVPResultW((CUserCharacInfo *)this);
    *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + param_1;
    iVar1 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
    cUserHistoryLog::WPAdd
              ((cUserHistoryLog *)(this + 0x79700),*(undefined4 *)(iVar1 + 0x58),param_1,param_3);
  }
  return;
}
```
