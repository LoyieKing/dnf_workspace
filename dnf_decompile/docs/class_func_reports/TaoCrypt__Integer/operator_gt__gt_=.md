# operator>>=

`_ZN8TaoCrypt7IntegerrSEj`

`TaoCrypt::Integer::operator>>=(unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08760820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08760820  _ZN8TaoCrypt7IntegerrSEj
#           TaoCrypt::Integer::operator>>=(unsigned int)
# range [0x08760820, 0x08760929]
08760820 +0x000:  push   %ebp
08760821 +0x001:  mov    %esp,%ebp
08760823 +0x003:  push   %edi
08760824 +0x004:  push   %esi
08760825 +0x005:  push   %ebx
08760826 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0876082b +0x00b:  add    $0xc0c36d,%ebx
08760831 +0x011:  sub    $0x4c,%esp
08760834 +0x014:  mov    0x8(%ebp),%eax
08760837 +0x017:  mov    %eax,(%esp)
0876083a +0x01a:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0876083f +0x01f:  mov    0xc(%ebp),%edx
08760842 +0x022:  mov    0x8(%ebp),%edi
08760845 +0x025:  shr    $0x5,%edx
08760848 +0x028:  mov    %edx,%esi
0876084a +0x02a:  mov    0x4(%edi),%ecx
0876084d +0x02d:  cmp    %edx,%eax
0876084f +0x02f:  cmovbe %eax,%esi
08760852 +0x032:  test   %esi,%esi
08760854 +0x034:  mov    %edx,-0x1c(%ebp)
08760857 +0x037:  je     08760896 <+0x76>
08760859 +0x039:  cmp    %esi,%eax
0876085b +0x03b:  jbe    08760878 <+0x58>
0876085d +0x03d:  mov    %esi,%edi
0876085f +0x03f:  xor    %edx,%edx
08760861 +0x041:  lea    0x0(%esi,%eiz,1),%esi
08760868 +0x048:  mov    (%ecx,%edi,4),%edi
0876086b +0x04b:  mov    %edi,(%ecx,%edx,4)
0876086e +0x04e:  add    $0x1,%edx
08760871 +0x051:  lea    (%edx,%esi,1),%edi
08760874 +0x054:  cmp    %edi,%eax
08760876 +0x056:  ja     08760868 <+0x48>
08760878 +0x058:  mov    %eax,%edx
0876087a +0x05a:  sub    %esi,%edx
0876087c +0x05c:  lea    (%ecx,%edx,4),%edi
0876087f +0x05f:  xor    %edx,%edx
08760881 +0x061:  lea    0x0(%esi,%eiz,1),%esi
08760888 +0x068:  movl   $0x0,(%edi,%edx,4)
0876088f +0x06f:  add    $0x1,%edx
08760892 +0x072:  cmp    %esi,%edx
08760894 +0x074:  jb     08760888 <+0x68>
08760896 +0x076:  cmp    -0x1c(%ebp),%eax
08760899 +0x079:  jbe    087608ed <+0xcd>
0876089b +0x07b:  mov    0xc(%ebp),%edx
0876089e +0x07e:  and    $0x1f,%edx
087608a1 +0x081:  mov    %edx,-0x20(%ebp)
087608a4 +0x084:  je     087608ed <+0xcd>
087608a6 +0x086:  mov    -0x1c(%ebp),%edx
087608a9 +0x089:  not    %edx
087608ab +0x08b:  add    %edx,%eax
087608ad +0x08d:  js     087608ed <+0xcd>
087608af +0x08f:  mov    -0x20(%ebp),%edi
087608b2 +0x092:  lea    (%ecx,%eax,4),%edx
087608b5 +0x095:  movl   $0x20,-0x1c(%ebp)
087608bc +0x09c:  sub    %edi,-0x1c(%ebp)
087608bf +0x09f:  xor    %edi,%edi
087608c1 +0x0a1:  mov    %edi,-0x3c(%ebp)
087608c4 +0x0a4:  lea    0x0(%esi,%eiz,1),%esi
087608c8 +0x0a8:  mov    (%edx),%esi
087608ca +0x0aa:  sub    $0x1,%eax
087608cd +0x0ad:  movzbl -0x20(%ebp),%ecx
087608d1 +0x0b1:  mov    %esi,%edi
087608d3 +0x0b3:  shr    %cl,%edi
087608d5 +0x0b5:  mov    -0x3c(%ebp),%ecx
087608d8 +0x0b8:  or     %ecx,%edi
087608da +0x0ba:  movzbl -0x1c(%ebp),%ecx
087608de +0x0be:  mov    %edi,(%edx)
087608e0 +0x0c0:  sub    $0x4,%edx
087608e3 +0x0c3:  shl    %cl,%esi
087608e5 +0x0c5:  cmp    $0xffffffff,%eax
087608e8 +0x0c8:  mov    %esi,-0x3c(%ebp)
087608eb +0x0cb:  jne    087608c8 <+0xa8>
087608ed +0x0cd:  mov    0x8(%ebp),%edi
087608f0 +0x0d0:  cmpl   $0x1,0xc(%edi)
087608f4 +0x0d4:  je     08760908 <+0xe8>
087608f6 +0x0d6:  mov    0x8(%ebp),%eax
087608f9 +0x0d9:  add    $0x4c,%esp
087608fc +0x0dc:  pop    %ebx
087608fd +0x0dd:  pop    %esi
087608fe +0x0de:  pop    %edi
087608ff +0x0df:  pop    %ebp
08760900 +0x0e0:  ret
08760901 +0x0e1:  lea    0x0(%esi,%eiz,1),%esi
08760908 +0x0e8:  mov    %edi,(%esp)
0876090b +0x0eb:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
08760910 +0x0f0:  test   %eax,%eax
08760912 +0x0f2:  jne    087608f6 <+0xd6>
08760914 +0x0f4:  call   0875f860 <_ZN8TaoCrypt7Integer4ZeroEv>  ; TaoCrypt::Integer::Zero()
08760919 +0x0f9:  mov    %edi,(%esp)
0876091c +0x0fc:  mov    %eax,0x4(%esp)
08760920 +0x100:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08760925 +0x105:  jmp    087608f6 <+0xd6>
08760927 +0x107:  nop
08760928 +0x108:  nop
08760929 +0x109:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::operator>>= @ 0x8760820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

Integer * __thiscall TaoCrypt::Integer::operator>>=(Integer *this,uint param_1)

{
  sbyte sVar1;
  uint uVar2;
  int iVar3;
  Integer *pIVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint local_40;
  byte local_20;
  
  uVar2 = WordCount(this);
  uVar5 = param_1 >> 5;
  iVar3 = *(int *)(this + 4);
  uVar9 = uVar5;
  if (uVar2 <= uVar5) {
    uVar9 = uVar2;
  }
  if (uVar9 != 0) {
    if (uVar9 < uVar2) {
      iVar6 = 0;
      uVar7 = uVar9;
      do {
        *(undefined4 *)(iVar3 + iVar6 * 4) = *(undefined4 *)(iVar3 + uVar7 * 4);
        iVar6 = iVar6 + 1;
        uVar7 = iVar6 + uVar9;
      } while (uVar7 < uVar2);
    }
    uVar7 = 0;
    do {
      *(undefined4 *)(iVar3 + (uVar2 - uVar9) * 4 + uVar7 * 4) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  if (((uVar5 < uVar2) && ((param_1 & 0x1f) != 0)) && (iVar6 = uVar2 + ~uVar5, -1 < iVar6)) {
    puVar8 = (uint *)(iVar3 + iVar6 * 4);
    sVar1 = (sbyte)(param_1 & 0x1f);
    local_20 = 0x20 - sVar1;
    local_40 = 0;
    do {
      uVar9 = *puVar8;
      iVar6 = iVar6 + -1;
      *puVar8 = uVar9 >> sVar1 | local_40;
      puVar8 = puVar8 + -1;
      local_40 = uVar9 << (local_20 & 0x1f);
    } while (iVar6 != -1);
  }
  if (*(int *)(this + 0xc) == 1) {
    iVar3 = WordCount(this);
    if (iVar3 == 0) {
      pIVar4 = (Integer *)Zero();
      operator=(this,pIVar4);
    }
  }
  return this;
}
```
