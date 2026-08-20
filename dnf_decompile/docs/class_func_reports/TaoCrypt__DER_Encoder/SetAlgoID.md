# SetAlgoID

`_ZN8TaoCrypt11DER_Encoder9SetAlgoIDENS_8HashTypeEPh`

`TaoCrypt::DER_Encoder::SetAlgoID(TaoCrypt::HashType, unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DER_Encoder` | `0x08754700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08754700  _ZN8TaoCrypt11DER_Encoder9SetAlgoIDENS_8HashTypeEPh
#           TaoCrypt::DER_Encoder::SetAlgoID(TaoCrypt::HashType, unsigned char*)
# range [0x08754700, 0x0875482b]
08754700 +0x000:  push   %ebp
08754701 +0x001:  mov    %esp,%ebp
08754703 +0x003:  sub    $0x48,%esp
08754706 +0x006:  mov    0xc(%ebp),%eax
08754709 +0x009:  mov    %ebx,-0xc(%ebp)
0875470c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08754711 +0x011:  add    $0xc18487,%ebx
08754717 +0x017:  mov    %esi,-0x8(%ebp)
0875471a +0x01a:  cmp    $0x286,%eax
0875471f +0x01f:  mov    %edi,-0x4(%ebp)
08754722 +0x022:  je     08754818 <+0x118>
08754728 +0x028:  cmp    $0x289,%eax
0875472d +0x02d:  je     08754800 <+0x100>
08754733 +0x033:  cmp    $0x58,%eax
08754736 +0x036:  je     08754758 <+0x58>
08754738 +0x038:  mov    0x8(%ebp),%eax
0875473b +0x03b:  movl   $0x40a,0x4(%eax)
08754742 +0x042:  xor    %eax,%eax
08754744 +0x044:  mov    -0xc(%ebp),%ebx
08754747 +0x047:  mov    -0x8(%ebp),%esi
0875474a +0x04a:  mov    -0x4(%ebp),%edi
0875474d +0x04d:  mov    %ebp,%esp
0875474f +0x04f:  pop    %ebp
08754750 +0x050:  ret
08754751 +0x051:  lea    0x0(%esi,%eiz,1),%esi
08754758 +0x058:  lea    -0x6679ae(%ebx),%edx
0875475e +0x05e:  mov    $0x7,%esi
08754763 +0x063:  mov    $0x5,%eax
08754768 +0x068:  mov    %edx,-0x30(%ebp)
0875476b +0x06b:  lea    -0x1d(%ebp),%ecx
0875476e +0x06e:  mov    %ecx,0x4(%esp)
08754772 +0x072:  mov    %ecx,-0x34(%ebp)
08754775 +0x075:  mov    %eax,(%esp)
08754778 +0x078:  call   087544e0 <_ZN8TaoCrypt9SetLengthEjPh>  ; TaoCrypt::SetLength(unsigned int, unsigned char*)
0875477d +0x07d:  lea    -0x23(%ebp),%edx
08754780 +0x080:  mov    %edx,0x4(%esp)
08754784 +0x084:  mov    %edx,-0x38(%ebp)
08754787 +0x087:  mov    %eax,%edi
08754789 +0x089:  lea    0x1(%esi,%eax,1),%eax
0875478d +0x08d:  mov    %eax,(%esp)
08754790 +0x090:  call   08754570 <_ZN8TaoCrypt11SetSequenceEjPh>  ; TaoCrypt::SetSequence(unsigned int, unsigned char*)
08754795 +0x095:  movb   $0x6,-0x23(%ebp,%eax,1)
0875479a +0x09a:  add    $0x1,%eax
0875479d +0x09d:  mov    -0x38(%ebp),%edx
087547a0 +0x0a0:  mov    %eax,-0x2c(%ebp)
087547a3 +0x0a3:  mov    %eax,0x8(%esp)
087547a7 +0x0a7:  mov    0x10(%ebp),%eax
087547aa +0x0aa:  mov    %edx,0x4(%esp)
087547ae +0x0ae:  mov    %eax,(%esp)
087547b1 +0x0b1:  call   0807d8a0 <_init+0x198>
087547b6 +0x0b6:  mov    -0x34(%ebp),%ecx
087547b9 +0x0b9:  mov    0x10(%ebp),%eax
087547bc +0x0bc:  add    -0x2c(%ebp),%eax
087547bf +0x0bf:  mov    %edi,0x8(%esp)
087547c3 +0x0c3:  mov    %ecx,0x4(%esp)
087547c7 +0x0c7:  mov    %eax,(%esp)
087547ca +0x0ca:  call   0807d8a0 <_init+0x198>
087547cf +0x0cf:  mov    0x10(%ebp),%eax
087547d2 +0x0d2:  add    -0x2c(%ebp),%edi
087547d5 +0x0d5:  mov    -0x30(%ebp),%edx
087547d8 +0x0d8:  mov    %esi,0x8(%esp)
087547dc +0x0dc:  add    %edi,%eax
087547de +0x0de:  mov    %eax,(%esp)
087547e1 +0x0e1:  mov    %edx,0x4(%esp)
087547e5 +0x0e5:  call   0807d8a0 <_init+0x198>
087547ea +0x0ea:  lea    (%edi,%esi,1),%eax
087547ed +0x0ed:  mov    -0xc(%ebp),%ebx
087547f0 +0x0f0:  mov    -0x8(%ebp),%esi
087547f3 +0x0f3:  mov    -0x4(%ebp),%edi
087547f6 +0x0f6:  mov    %ebp,%esp
087547f8 +0x0f8:  pop    %ebp
087547f9 +0x0f9:  ret
087547fa +0x0fa:  lea    0x0(%esi),%esi
08754800 +0x100:  lea    -0x6679b8(%ebx),%edx
08754806 +0x106:  mov    $0xa,%esi
0875480b +0x10b:  mov    $0x8,%eax
08754810 +0x110:  mov    %edx,-0x30(%ebp)
08754813 +0x113:  jmp    0875476b <+0x6b>
08754818 +0x118:  lea    -0x6679c2(%ebx),%edx
0875481e +0x11e:  mov    $0xa,%esi
08754823 +0x123:  mov    $0x8,%eax
08754828 +0x128:  mov    %edx,-0x30(%ebp)
0875482b +0x12b:  jmp    0875476b <+0x6b>
```

## 反编译 C

```c
// TaoCrypt::DER_Encoder::SetAlgoID @ 0x8754700

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DER_Encoder::SetAlgoID(TaoCrypt::HashType, unsigned char*) */

int __thiscall TaoCrypt::DER_Encoder::SetAlgoID(DER_Encoder *this,int param_2,void *param_3)

{
  uint uVar1;
  size_t __n;
  int iVar2;
  size_t __n_00;
  size_t __n_01;
  undefined7 *local_34;
  uchar local_27 [6];
  uchar local_21 [17];
  
  if (param_2 == 0x286) {
    __n_01 = 10;
    uVar1 = 8;
    local_34 = (undefined7 *)SetAlgoID(TaoCrypt::HashType,unsigned_char*)::md2AlgoID;
  }
  else if (param_2 == 0x289) {
    local_34 = (undefined7 *)SetAlgoID(TaoCrypt::HashType,unsigned_char*)::md5AlgoID;
    __n_01 = 10;
    uVar1 = 8;
  }
  else {
    if (param_2 != 0x58) {
      *(undefined4 *)(this + 4) = 0x40a;
      return 0;
    }
    local_34 = &SetAlgoID(TaoCrypt::HashType,unsigned_char*)::shaAlgoID;
    __n_01 = 7;
    uVar1 = 5;
  }
  __n = SetLength(uVar1,local_21);
  iVar2 = SetSequence(__n_01 + 1 + __n,local_27);
  local_27[iVar2] = '\x06';
  __n_00 = iVar2 + 1;
  memcpy(param_3,local_27,__n_00);
  memcpy((void *)((int)param_3 + __n_00),local_21,__n);
  memcpy((void *)((int)param_3 + __n + __n_00),local_34,__n_01);
  return __n + __n_00 + __n_01;
}
```
