# get_level_up_exp

`_ZN15CUserCharacInfo16get_level_up_expEi`

`CUserCharacInfo::get_level_up_exp(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864e3ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e3ba  _ZN15CUserCharacInfo16get_level_up_expEi
#           CUserCharacInfo::get_level_up_exp(int)
# range [0x0864e3ba, 0x0864e3f9]
0864e3ba +0x00:  push   %ebp
0864e3bb +0x01:  mov    %esp,%ebp
0864e3bd +0x03:  push   %ebx
0864e3be +0x04:  sub    $0x14,%esp
0864e3c1 +0x07:  mov    0xc(%ebp),%eax
0864e3c4 +0x0a:  lea    0x1(%eax),%ebx
0864e3c7 +0x0d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864e3cc +0x12:  mov    %ebx,0x4(%esp)
0864e3d0 +0x16:  mov    %eax,(%esp)
0864e3d3 +0x19:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
0864e3d8 +0x1e:  mov    %eax,%ebx
0864e3da +0x20:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864e3df +0x25:  mov    0xc(%ebp),%edx
0864e3e2 +0x28:  mov    %edx,0x4(%esp)
0864e3e6 +0x2c:  mov    %eax,(%esp)
0864e3e9 +0x2f:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
0864e3ee +0x34:  mov    %ebx,%edx
0864e3f0 +0x36:  sub    %eax,%edx
0864e3f2 +0x38:  mov    %edx,%eax
0864e3f4 +0x3a:  add    $0x14,%esp
0864e3f7 +0x3d:  pop    %ebx
0864e3f8 +0x3e:  pop    %ebp
0864e3f9 +0x3f:  ret
```

## 反编译 C

```c
// CUserCharacInfo::get_level_up_exp @ 0x864e3ba

/* CUserCharacInfo::get_level_up_exp(int) */

int __thiscall CUserCharacInfo::get_level_up_exp(CUserCharacInfo *this,int param_1)

{
  CDataManager *pCVar1;
  int iVar2;
  int iVar3;
  
  pCVar1 = (CDataManager *)G_CDataManager();
  iVar2 = CDataManager::get_level_exp(pCVar1,param_1 + 1);
  pCVar1 = (CDataManager *)G_CDataManager();
  iVar3 = CDataManager::get_level_exp(pCVar1,param_1);
  return iVar2 - iVar3;
}
```
