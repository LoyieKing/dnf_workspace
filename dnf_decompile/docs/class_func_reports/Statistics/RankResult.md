# RankResult

`_ZN10Statistics10RankResultEjjiiiiiR14GameResultType`

`Statistics::RankResult(unsigned int, unsigned int, int, int, int, int, int, GameResultType&)`

| 类 | 地址 |
|---|---|
| `Statistics` | `0x0860b788` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b788  _ZN10Statistics10RankResultEjjiiiiiR14GameResultType
#           Statistics::RankResult(unsigned int, unsigned int, int, int, int, int, int, GameResultType&)
# range [0x0860b788, 0x0860b81b]
0860b788 +0x00:  push   %ebp
0860b789 +0x01:  mov    %esp,%ebp
0860b78b +0x03:  push   %edi
0860b78c +0x04:  push   %esi
0860b78d +0x05:  push   %ebx
0860b78e +0x06:  sub    $0x8c,%esp
0860b794 +0x0c:  lea    -0x84(%ebp),%eax
0860b79a +0x12:  mov    %eax,(%esp)
0860b79d +0x15:  call   08610798 <_GLOBAL__I__ZN10StatisticsC2Ev+0x816>  ; global constructors keyed to Statistics::Statistics()+0x816
0860b7a2 +0x1a:  mov    0x8(%ebp),%eax
0860b7a5 +0x1d:  mov    %eax,-0x84(%ebp)
0860b7ab +0x23:  mov    0xc(%ebp),%eax
0860b7ae +0x26:  mov    %eax,-0x80(%ebp)
0860b7b1 +0x29:  mov    0x10(%ebp),%eax
0860b7b4 +0x2c:  mov    %eax,-0x7c(%ebp)
0860b7b7 +0x2f:  mov    0x14(%ebp),%eax
0860b7ba +0x32:  mov    %eax,-0x78(%ebp)
0860b7bd +0x35:  mov    0x18(%ebp),%eax
0860b7c0 +0x38:  mov    %eax,-0x74(%ebp)
0860b7c3 +0x3b:  mov    0x20(%ebp),%eax
0860b7c6 +0x3e:  mov    %eax,-0x70(%ebp)
0860b7c9 +0x41:  mov    0x1c(%ebp),%eax
0860b7cc +0x44:  mov    %eax,-0x6c(%ebp)
0860b7cf +0x47:  mov    0x24(%ebp),%eax
0860b7d2 +0x4a:  lea    -0x68(%ebp),%edx
0860b7d5 +0x4d:  mov    %eax,%ebx
0860b7d7 +0x4f:  mov    $0x14,%eax
0860b7dc +0x54:  mov    %edx,%edi
0860b7de +0x56:  mov    %ebx,%esi
0860b7e0 +0x58:  mov    %eax,%ecx
0860b7e2 +0x5a:  rep movsl %ds:(%esi),%es:(%edi)
0860b7e4 +0x5c:  movl   $0x6c,0x8(%esp)
0860b7ec +0x64:  lea    -0x84(%ebp),%eax
0860b7f2 +0x6a:  mov    %eax,0x4(%esp)
0860b7f6 +0x6e:  movl   $0x3b,(%esp)
0860b7fd +0x75:  call   0860b92e <_ZN10Statistics10SendSignalEiPvi>  ; Statistics::SendSignal(int, void*, int)
0860b802 +0x7a:  lea    -0x84(%ebp),%eax
0860b808 +0x80:  mov    %eax,(%esp)
0860b80b +0x83:  call   086107ae <_GLOBAL__I__ZN10StatisticsC2Ev+0x82c>  ; global constructors keyed to Statistics::Statistics()+0x82c
0860b810 +0x88:  add    $0x8c,%esp
0860b816 +0x8e:  pop    %ebx
0860b817 +0x8f:  pop    %esi
0860b818 +0x90:  pop    %edi
0860b819 +0x91:  pop    %ebp
0860b81a +0x92:  ret
0860b81b +0x93:  nop
```

## 反编译 C

```c
// Statistics::RankResult @ 0x860b788

/* Statistics::RankResult(unsigned int, unsigned int, int, int, int, int, int, GameResultType&) */

void Statistics::RankResult
               (uint param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,GameResultType *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c [23];
  
  bVar3 = 0;
  MSG_STAT_RANKRES::MSG_STAT_RANKRES((MSG_STAT_RANKRES *)&local_88);
  local_88 = param_1;
  local_84 = param_2;
  local_80 = param_3;
  local_7c = param_4;
  local_78 = param_5;
  local_74 = param_7;
  local_70 = param_6;
  puVar2 = local_6c;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)param_8;
    param_8 = param_8 + (uint)bVar3 * -8 + 4;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  SendSignal(0x3b,&local_88,0x6c);
  MSG_STAT_RANKRES::~MSG_STAT_RANKRES((MSG_STAT_RANKRES *)&local_88);
  return;
}
```
