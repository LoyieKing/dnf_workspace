# Accumulate

`_ZNK8TaoCrypt17ModularArithmetic10AccumulateERNS_7IntegerERKS1_`

`TaoCrypt::ModularArithmetic::Accumulate(TaoCrypt::Integer&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::ModularArithmetic` | `0x0875ffc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875ffc0  _ZNK8TaoCrypt17ModularArithmetic10AccumulateERNS_7IntegerERKS1_
#           TaoCrypt::ModularArithmetic::Accumulate(TaoCrypt::Integer&, TaoCrypt::Integer const&) const
# range [0x0875ffc0, 0x087600dc]
0875ffc0 +0x000:  push   %ebp
0875ffc1 +0x001:  mov    %esp,%ebp
0875ffc3 +0x003:  sub    $0x38,%esp
0875ffc6 +0x006:  mov    %esi,-0x8(%ebp)
0875ffc9 +0x009:  mov    0xc(%ebp),%esi
0875ffcc +0x00c:  mov    %edi,-0x4(%ebp)
0875ffcf +0x00f:  mov    0x8(%ebp),%edi
0875ffd2 +0x012:  mov    %ebx,-0xc(%ebp)
0875ffd5 +0x015:  mov    0x10(%ebp),%edx
0875ffd8 +0x018:  call   08722df8 <__i686.get_pc_thunk.bx>
0875ffdd +0x01d:  add    $0xc0cbbb,%ebx
0875ffe3 +0x023:  mov    (%esi),%eax
0875ffe5 +0x025:  cmp    0xc(%edi),%eax
0875ffe8 +0x028:  je     08760028 <+0x68>
0875ffea +0x02a:  add    $0xc,%edi
0875ffed +0x02d:  mov    %edx,0x4(%esp)
0875fff1 +0x031:  mov    %esi,(%esp)
0875fff4 +0x034:  call   0875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>  ; TaoCrypt::Integer::operator+=(TaoCrypt::Integer const&)
0875fff9 +0x039:  mov    %edi,0x4(%esp)
0875fffd +0x03d:  mov    %esi,(%esp)
08760000 +0x040:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
08760005 +0x045:  test   %eax,%eax
08760007 +0x047:  js     08760015 <+0x55>
08760009 +0x049:  mov    %edi,0x4(%esp)
0876000d +0x04d:  mov    %esi,(%esp)
08760010 +0x050:  call   0875fcc0 <_ZN8TaoCrypt7IntegermIERKS0_>  ; TaoCrypt::Integer::operator-=(TaoCrypt::Integer const&)
08760015 +0x055:  mov    %esi,%eax
08760017 +0x057:  mov    -0xc(%ebp),%ebx
0876001a +0x05a:  mov    -0x8(%ebp),%esi
0876001d +0x05d:  mov    -0x4(%ebp),%edi
08760020 +0x060:  mov    %ebp,%esp
08760022 +0x062:  pop    %ebp
08760023 +0x063:  ret
08760024 +0x064:  lea    0x0(%esi,%eiz,1),%esi
08760028 +0x068:  cmp    (%edx),%eax
0876002a +0x06a:  jne    0875ffea <+0x2a>
0876002c +0x06c:  mov    0x4(%esi),%ecx
0876002f +0x06f:  mov    %eax,0xc(%esp)
08760033 +0x073:  mov    0x4(%edx),%eax
08760036 +0x076:  mov    %ecx,0x4(%esp)
0876003a +0x07a:  mov    %eax,0x8(%esp)
0876003e +0x07e:  mov    %ecx,(%esp)
08760041 +0x081:  call   *0x124c8c(%ebx)
08760047 +0x087:  test   %eax,%eax
08760049 +0x089:  jne    087600c8 <+0x108>
0876004b +0x08b:  mov    (%esi),%eax
0876004d +0x08d:  mov    0x10(%edi),%edi
08760050 +0x090:  mov    %esi,-0x28(%ebp)
08760053 +0x093:  mov    %eax,-0x1c(%ebp)
08760056 +0x096:  mov    0x4(%esi),%eax
08760059 +0x099:  mov    %edi,-0x24(%ebp)
0876005c +0x09c:  mov    %eax,-0x20(%ebp)
0876005f +0x09f:  mov    -0x1c(%ebp),%eax
08760062 +0x0a2:  mov    -0x20(%ebp),%ecx
08760065 +0x0a5:  lea    -0x4(,%eax,4),%edx
0876006c +0x0ac:  add    %edx,%ecx
0876006e +0x0ae:  add    %edi,%edx
08760070 +0x0b0:  test   %eax,%eax
08760072 +0x0b2:  je     087600a0 <+0xe0>
08760074 +0x0b4:  mov    (%ecx),%edi
08760076 +0x0b6:  sub    $0x1,%eax
08760079 +0x0b9:  mov    (%edx),%esi
0876007b +0x0bb:  cmp    %esi,%edi
0876007d +0x0bd:  ja     087600a0 <+0xe0>
0876007f +0x0bf:  sub    $0x4,%ecx
08760082 +0x0c2:  sub    $0x4,%edx
08760085 +0x0c5:  cmp    %esi,%edi
08760087 +0x0c7:  jae    08760070 <+0xb0>
08760089 +0x0c9:  mov    -0x28(%ebp),%esi
0876008c +0x0cc:  mov    -0xc(%ebp),%ebx
0876008f +0x0cf:  mov    -0x4(%ebp),%edi
08760092 +0x0d2:  mov    %esi,%eax
08760094 +0x0d4:  mov    -0x8(%ebp),%esi
08760097 +0x0d7:  mov    %ebp,%esp
08760099 +0x0d9:  pop    %ebp
0876009a +0x0da:  ret
0876009b +0x0db:  nop
0876009c +0x0dc:  lea    0x0(%esi,%eiz,1),%esi
087600a0 +0x0e0:  mov    -0x28(%ebp),%esi
087600a3 +0x0e3:  mov    -0x1c(%ebp),%eax
087600a6 +0x0e6:  mov    %eax,0xc(%esp)
087600aa +0x0ea:  mov    -0x24(%ebp),%eax
087600ad +0x0ed:  mov    %eax,0x8(%esp)
087600b1 +0x0f1:  mov    -0x20(%ebp),%eax
087600b4 +0x0f4:  mov    %eax,0x4(%esp)
087600b8 +0x0f8:  mov    %eax,(%esp)
087600bb +0x0fb:  call   *0x124c90(%ebx)
087600c1 +0x101:  jmp    08760015 <+0x55>
087600c6 +0x106:  xchg   %ax,%ax
087600c8 +0x108:  mov    (%esi),%eax
087600ca +0x10a:  mov    0x10(%edi),%edi
087600cd +0x10d:  mov    %eax,-0x1c(%ebp)
087600d0 +0x110:  mov    0x4(%esi),%eax
087600d3 +0x113:  mov    %edi,-0x24(%ebp)
087600d6 +0x116:  mov    %eax,-0x20(%ebp)
087600d9 +0x119:  jmp    087600a3 <+0xe3>
087600db +0x11b:  nop
087600dc +0x11c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::ModularArithmetic::Accumulate @ 0x875ffc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::Accumulate(TaoCrypt::Integer&, TaoCrypt::Integer const&) const */

Integer * __thiscall
TaoCrypt::ModularArithmetic::Accumulate(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int local_28;
  int local_24;
  int local_20;
  
  iVar3 = *(int *)param_1;
  if ((iVar3 == *(int *)(this + 0xc)) && (iVar3 == *(int *)param_2)) {
    iVar3 = (*s_pAdd)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),
                      *(undefined4 *)(param_2 + 4),iVar3);
    if (iVar3 == 0) {
      local_20 = *(int *)param_1;
      local_28 = *(int *)(this + 0x10);
      local_24 = *(int *)(param_1 + 4);
      iVar3 = local_20 * 4 + -4;
      puVar4 = (uint *)(local_24 + iVar3);
      puVar5 = (uint *)(iVar3 + local_28);
      iVar3 = local_20;
      while (iVar3 != 0) {
        uVar1 = *puVar4;
        iVar3 = iVar3 + -1;
        uVar2 = *puVar5;
        if (uVar2 < uVar1) break;
        puVar4 = puVar4 + -1;
        puVar5 = puVar5 + -1;
        if (uVar1 < uVar2) {
          return param_1;
        }
      }
    }
    else {
      local_20 = *(int *)param_1;
      local_28 = *(int *)(this + 0x10);
      local_24 = *(int *)(param_1 + 4);
    }
    (*s_pSub)(local_24,local_24,local_28,local_20);
  }
  else {
    Integer::operator+=(param_1,param_2);
    iVar3 = Integer::Compare(param_1,(Integer *)(this + 0xc));
    if (-1 < iVar3) {
      Integer::operator-=(param_1,(Integer *)(this + 0xc));
    }
  }
  return param_1;
}
```
