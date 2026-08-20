# DismantleArtifact

`_ZN13user_creature12CCreatureMgr17DismantleArtifactEiP10Inven_Item`

`user_creature::CCreatureMgr::DismantleArtifact(int, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08339718` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08339718  _ZN13user_creature12CCreatureMgr17DismantleArtifactEiP10Inven_Item
#           user_creature::CCreatureMgr::DismantleArtifact(int, Inven_Item*)
# range [0x08339718, 0x08339751]
08339718 +0x00:  push   %ebp
08339719 +0x01:  mov    %esp,%ebp
0833971b +0x03:  sub    $0x28,%esp
0833971e +0x06:  mov    0xc(%ebp),%eax
08339721 +0x09:  mov    %eax,0x4(%esp)
08339725 +0x0d:  mov    0x8(%ebp),%eax
08339728 +0x10:  mov    %eax,(%esp)
0833972b +0x13:  call   0833be56 <_ZN13user_creature12CCreatureMgr11GetArtifactEi>  ; user_creature::CCreatureMgr::GetArtifact(int)
08339730 +0x18:  mov    %eax,-0xc(%ebp)
08339733 +0x1b:  cmpl   $0x0,-0xc(%ebp)
08339737 +0x1f:  jne    08339740 <+0x28>
08339739 +0x21:  mov    $0x0,%eax
0833973e +0x26:  jmp    08339750 <+0x38>
08339740 +0x28:  mov    -0xc(%ebp),%eax
08339743 +0x2b:  mov    %eax,(%esp)
08339746 +0x2e:  call   08336f60 <_ZN13user_creature9CArtifact5ResetEv>  ; user_creature::CArtifact::Reset()
0833974b +0x33:  mov    $0x1,%eax
08339750 +0x38:  leave
08339751 +0x39:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::DismantleArtifact @ 0x8339718

/* user_creature::CCreatureMgr::DismantleArtifact(int, Inven_Item*) */

bool user_creature::CCreatureMgr::DismantleArtifact(int param_1,Inven_Item *param_2)

{
  CArtifact *this;
  
  this = (CArtifact *)GetArtifact((CCreatureMgr *)param_1,(int)param_2);
  if (this != (CArtifact *)0x0) {
    CArtifact::Reset(this);
  }
  return this != (CArtifact *)0x0;
}
```
