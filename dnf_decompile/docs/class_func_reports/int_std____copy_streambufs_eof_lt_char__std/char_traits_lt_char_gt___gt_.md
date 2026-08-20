# char_traits<char> >

`_ZSt21__copy_streambufs_eofIcSt11char_traitsIcEEiPSt15basic_streambufIT_T0_ES6_Rb`

`int std::__copy_streambufs_eof<char, std::char_traits<char> >(std::basic_streambuf<char, std::char_traits<char> >*, std::basic_streambuf<char, std::char_traits<char> >*, bool&)`

| 类 | 地址 |
|---|---|
| `int std::__copy_streambufs_eof<char, std` | `0x087062e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087062e0  _ZSt21__copy_streambufs_eofIcSt11char_traitsIcEEiPSt15basic_streambufIT_T0_ES6_Rb
#           int std::__copy_streambufs_eof<char, std::char_traits<char> >(std::basic_streambuf<char, std::char_traits<char> >*, std::basic_streambuf<char, std::char_traits<char> >*, bool&)
# range [0x087062e0, 0x087063ef]
087062e0 +0x000:  push   %ebp
087062e1 +0x001:  mov    %esp,%ebp
087062e3 +0x003:  push   %edi
087062e4 +0x004:  push   %esi
087062e5 +0x005:  push   %ebx
087062e6 +0x006:  sub    $0x2c,%esp
087062e9 +0x009:  mov    0x8(%ebp),%ebx
087062ec +0x00c:  mov    0x10(%ebp),%eax
087062ef +0x00f:  mov    0xc(%ebp),%edi
087062f2 +0x012:  mov    0x8(%ebx),%edx
087062f5 +0x015:  cmp    0xc(%ebx),%edx
087062f8 +0x018:  movb   $0x1,(%eax)
087062fb +0x01b:  jae    087063ca <+0xea>
08706301 +0x021:  movzbl (%edx),%eax
08706304 +0x024:  movl   $0x0,-0x1c(%ebp)
0870630b +0x02b:  jmp    0870633a <+0x5a>
0870630d +0x02d:  lea    0x0(%esi),%esi
08706310 +0x030:  mov    (%edi),%eax
08706312 +0x032:  mov    %esi,0x8(%esp)
08706316 +0x036:  mov    %edx,0x4(%esp)
0870631a +0x03a:  mov    %edi,(%esp)
0870631d +0x03d:  call   *0x30(%eax)
08706320 +0x040:  add    %eax,0x8(%ebx)
08706323 +0x043:  add    %eax,-0x1c(%ebp)
08706326 +0x046:  cmp    %eax,%esi
08706328 +0x048:  jg     08706398 <+0xb8>
0870632a +0x04a:  mov    (%ebx),%eax
0870632c +0x04c:  mov    %ebx,(%esp)
0870632f +0x04f:  call   *0x24(%eax)
08706332 +0x052:  cmp    $0xffffffff,%eax
08706335 +0x055:  je     08706373 <+0x93>
08706337 +0x057:  mov    0x8(%ebx),%edx
0870633a +0x05a:  mov    0xc(%ebx),%esi
0870633d +0x05d:  sub    %edx,%esi
0870633f +0x05f:  cmp    $0x1,%esi
08706342 +0x062:  jg     08706310 <+0x30>
08706344 +0x064:  mov    0x14(%edi),%edx
08706347 +0x067:  mov    %eax,%ecx
08706349 +0x069:  cmp    0x18(%edi),%edx
0870634c +0x06c:  jae    0870637e <+0x9e>
0870634e +0x06e:  mov    %al,(%edx)
08706350 +0x070:  addl   $0x1,0x14(%edi)
08706354 +0x074:  mov    0x8(%ebx),%eax
08706357 +0x077:  cmp    0xc(%ebx),%eax
0870635a +0x07a:  jae    087063b3 <+0xd3>
0870635c +0x07c:  add    $0x1,%eax
0870635f +0x07f:  mov    %eax,0x8(%ebx)
08706362 +0x082:  cmp    0xc(%ebx),%eax
08706365 +0x085:  jae    087063a9 <+0xc9>
08706367 +0x087:  movzbl (%eax),%eax
0870636a +0x08a:  addl   $0x1,-0x1c(%ebp)
0870636e +0x08e:  cmp    $0xffffffff,%eax
08706371 +0x091:  jne    08706337 <+0x57>
08706373 +0x093:  mov    -0x1c(%ebp),%eax
08706376 +0x096:  add    $0x2c,%esp
08706379 +0x099:  pop    %ebx
0870637a +0x09a:  pop    %esi
0870637b +0x09b:  pop    %edi
0870637c +0x09c:  pop    %ebp
0870637d +0x09d:  ret
0870637e +0x09e:  mov    (%edi),%eax
08706380 +0x0a0:  movzbl %cl,%ecx
08706383 +0x0a3:  mov    %ecx,0x4(%esp)
08706387 +0x0a7:  mov    %edi,(%esp)
0870638a +0x0aa:  call   *0x34(%eax)
0870638d +0x0ad:  cmp    $0xffffffff,%eax
08706390 +0x0b0:  jne    08706354 <+0x74>
08706392 +0x0b2:  lea    0x0(%esi),%esi
08706398 +0x0b8:  mov    0x10(%ebp),%eax
0870639b +0x0bb:  movb   $0x0,(%eax)
0870639e +0x0be:  mov    -0x1c(%ebp),%eax
087063a1 +0x0c1:  add    $0x2c,%esp
087063a4 +0x0c4:  pop    %ebx
087063a5 +0x0c5:  pop    %esi
087063a6 +0x0c6:  pop    %edi
087063a7 +0x0c7:  pop    %ebp
087063a8 +0x0c8:  ret
087063a9 +0x0c9:  mov    (%ebx),%eax
087063ab +0x0cb:  mov    %ebx,(%esp)
087063ae +0x0ce:  call   *0x24(%eax)
087063b1 +0x0d1:  jmp    0870636a <+0x8a>
087063b3 +0x0d3:  mov    (%ebx),%eax
087063b5 +0x0d5:  mov    %ebx,(%esp)
087063b8 +0x0d8:  call   *0x28(%eax)
087063bb +0x0db:  mov    %eax,%edx
087063bd +0x0dd:  or     $0xffffffff,%eax
087063c0 +0x0e0:  cmp    $0xffffffff,%edx
087063c3 +0x0e3:  je     0870636a <+0x8a>
087063c5 +0x0e5:  mov    0x8(%ebx),%eax
087063c8 +0x0e8:  jmp    08706362 <+0x82>
087063ca +0x0ea:  mov    (%ebx),%eax
087063cc +0x0ec:  mov    %ebx,(%esp)
087063cf +0x0ef:  call   *0x24(%eax)
087063d2 +0x0f2:  movl   $0x0,-0x1c(%ebp)
087063d9 +0x0f9:  cmp    $0xffffffff,%eax
087063dc +0x0fc:  je     08706373 <+0x93>
087063de +0x0fe:  mov    0x8(%ebx),%edx
087063e1 +0x101:  jmp    08706304 <+0x24>
087063e6 +0x106:  nop
087063e7 +0x107:  nop
087063e8 +0x108:  nop
087063e9 +0x109:  nop
087063ea +0x10a:  nop
087063eb +0x10b:  nop
087063ec +0x10c:  nop
087063ed +0x10d:  nop
087063ee +0x10e:  nop
087063ef +0x10f:  nop
```

## 反编译 C

```c
// <global>::int @ 0x87062e0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int std::__copy_streambufs_eof<char, std::char_traits<char> >(std::streambuf*, std::streambuf*,
   bool&) */

int std::__copy_streambufs_eof<char,std::char_traits<char>>
              (streambuf *param_1,streambuf *param_2,bool *param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int local_20;
  
  pbVar4 = *(byte **)(param_1 + 8);
  pbVar3 = *(byte **)(param_1 + 0xc);
  *param_3 = true;
  if (pbVar4 < pbVar3) {
    uVar1 = (uint)*pbVar4;
  }
  else {
    uVar1 = (**(code **)(*(int *)param_1 + 0x24))(param_1);
    if (uVar1 == 0xffffffff) {
      return 0;
    }
    pbVar4 = *(byte **)(param_1 + 8);
  }
  local_20 = 0;
  do {
    iVar5 = *(int *)(param_1 + 0xc) - (int)pbVar4;
    if (iVar5 < 2) {
      if (*(undefined1 **)(param_2 + 0x14) < *(undefined1 **)(param_2 + 0x18)) {
        **(undefined1 **)(param_2 + 0x14) = (char)uVar1;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      }
      else {
        iVar5 = (**(code **)(*(int *)param_2 + 0x34))(param_2,uVar1 & 0xff);
        if (iVar5 == -1) goto LAB_08706398;
      }
      if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
        pbVar3 = (byte *)(*(uint *)(param_1 + 8) + 1);
        *(byte **)(param_1 + 8) = pbVar3;
LAB_08706362:
        if (pbVar3 < *(byte **)(param_1 + 0xc)) {
          uVar1 = (uint)*pbVar3;
        }
        else {
          uVar1 = (**(code **)(*(int *)param_1 + 0x24))(param_1);
        }
      }
      else {
        iVar5 = (**(code **)(*(int *)param_1 + 0x28))(param_1);
        uVar1 = 0xffffffff;
        if (iVar5 != -1) {
          pbVar3 = *(byte **)(param_1 + 8);
          goto LAB_08706362;
        }
      }
      local_20 = local_20 + 1;
    }
    else {
      iVar2 = (**(code **)(*(int *)param_2 + 0x30))(param_2,pbVar4,iVar5);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2;
      local_20 = local_20 + iVar2;
      if (iVar2 < iVar5) {
LAB_08706398:
        *param_3 = false;
        return local_20;
      }
      uVar1 = (**(code **)(*(int *)param_1 + 0x24))(param_1);
    }
    if (uVar1 == 0xffffffff) {
      return local_20;
    }
    pbVar4 = *(byte **)(param_1 + 8);
  } while( true );
}
```
