# Modulo

`_ZNK8TaoCrypt7Integer6ModuloEj`

`TaoCrypt::Integer::Modulo(unsigned int) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d5c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d5c0  _ZNK8TaoCrypt7Integer6ModuloEj
#           TaoCrypt::Integer::Modulo(unsigned int) const
# range [0x0875d5c0, 0x0875d70e]
0875d5c0 +0x000:  push   %ebp
0875d5c1 +0x001:  mov    %esp,%ebp
0875d5c3 +0x003:  push   %edi
0875d5c4 +0x004:  push   %esi
0875d5c5 +0x005:  push   %ebx
0875d5c6 +0x006:  sub    $0x5c,%esp
0875d5c9 +0x009:  mov    0xc(%ebp),%eax
0875d5cc +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875d5d1 +0x011:  add    $0xc0f5c7,%ebx
0875d5d7 +0x017:  sub    $0x1,%eax
0875d5da +0x01a:  test   %eax,0xc(%ebp)
0875d5dd +0x01d:  jne    0875d600 <+0x40>
0875d5df +0x01f:  mov    0x8(%ebp),%ecx
0875d5e2 +0x022:  mov    0x4(%ecx),%edx
0875d5e5 +0x025:  and    (%edx),%eax
0875d5e7 +0x027:  mov    0x8(%ebp),%esi
0875d5ea +0x02a:  cmpl   $0x1,0xc(%esi)
0875d5ee +0x02e:  je     0875d690 <+0xd0>
0875d5f4 +0x034:  add    $0x5c,%esp
0875d5f7 +0x037:  pop    %ebx
0875d5f8 +0x038:  pop    %esi
0875d5f9 +0x039:  pop    %edi
0875d5fa +0x03a:  pop    %ebp
0875d5fb +0x03b:  ret
0875d5fc +0x03c:  lea    0x0(%esi,%eiz,1),%esi
0875d600 +0x040:  mov    0x8(%ebp),%esi
0875d603 +0x043:  mov    %esi,(%esp)
0875d606 +0x046:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0875d60b +0x04b:  cmpl   $0x5,0xc(%ebp)
0875d60f +0x04f:  mov    %eax,-0x2c(%ebp)
0875d612 +0x052:  ja     0875d6a8 <+0xe8>
0875d618 +0x058:  mov    -0x2c(%ebp),%ecx
0875d61b +0x05b:  test   %ecx,%ecx
0875d61d +0x05d:  je     0875d700 <+0x140>
0875d623 +0x063:  mov    0x8(%ebp),%edi
0875d626 +0x066:  xor    %esi,%esi
0875d628 +0x068:  xor    %eax,%eax
0875d62a +0x06a:  mov    %esi,%ecx
0875d62c +0x06c:  mov    -0x2c(%ebp),%esi
0875d62f +0x06f:  mov    %eax,%edx
0875d631 +0x071:  mov    0x4(%edi),%edi
0875d634 +0x074:  lea    -0x4(,%esi,4),%eax
0875d63b +0x07b:  mov    %eax,-0x3c(%ebp)
0875d63e +0x07e:  mov    %edi,-0x30(%ebp)
0875d641 +0x081:  lea    0x0(%esi,%eiz,1),%esi
0875d648 +0x088:  mov    -0x3c(%ebp),%edi
0875d64b +0x08b:  mov    -0x30(%ebp),%esi
0875d64e +0x08e:  mov    (%esi,%edi,1),%esi
0875d651 +0x091:  xor    %edi,%edi
0875d653 +0x093:  add    %esi,%edx
0875d655 +0x095:  adc    %edi,%ecx
0875d657 +0x097:  subl   $0x4,-0x3c(%ebp)
0875d65b +0x09b:  subl   $0x1,-0x2c(%ebp)
0875d65f +0x09f:  jne    0875d648 <+0x88>
0875d661 +0x0a1:  mov    0xc(%ebp),%edi
0875d664 +0x0a4:  movl   $0x0,0xc(%esp)
0875d66c +0x0ac:  mov    %edx,(%esp)
0875d66f +0x0af:  mov    %ecx,0x4(%esp)
0875d673 +0x0b3:  mov    %edi,0x8(%esp)
0875d677 +0x0b7:  call   08ae0830 <__umoddi3>
0875d67c +0x0bc:  mov    0x8(%ebp),%esi
0875d67f +0x0bf:  cmpl   $0x1,0xc(%esi)
0875d683 +0x0c3:  jne    0875d5f4 <+0x34>
0875d689 +0x0c9:  lea    0x0(%esi,%eiz,1),%esi
0875d690 +0x0d0:  mov    0xc(%ebp),%edx
0875d693 +0x0d3:  sub    %eax,%edx
0875d695 +0x0d5:  test   %eax,%eax
0875d697 +0x0d7:  cmovne %edx,%eax
0875d69a +0x0da:  add    $0x5c,%esp
0875d69d +0x0dd:  pop    %ebx
0875d69e +0x0de:  pop    %esi
0875d69f +0x0df:  pop    %edi
0875d6a0 +0x0e0:  pop    %ebp
0875d6a1 +0x0e1:  ret
0875d6a2 +0x0e2:  lea    0x0(%esi),%esi
0875d6a8 +0x0e8:  mov    -0x2c(%ebp),%esi
0875d6ab +0x0eb:  xor    %eax,%eax
0875d6ad +0x0ed:  test   %esi,%esi
0875d6af +0x0ef:  je     0875d5e7 <+0x27>
0875d6b5 +0x0f5:  mov    0x8(%ebp),%eax
0875d6b8 +0x0f8:  mov    -0x2c(%ebp),%edx
0875d6bb +0x0fb:  mov    0x4(%eax),%edi
0875d6be +0x0fe:  xor    %eax,%eax
0875d6c0 +0x100:  lea    -0x4(,%edx,4),%esi
0875d6c7 +0x107:  nop
0875d6c8 +0x108:  mov    (%edi,%esi,1),%edx
0875d6cb +0x10b:  sub    $0x4,%esi
0875d6ce +0x10e:  mov    %eax,-0x1c(%ebp)
0875d6d1 +0x111:  mov    0xc(%ebp),%ecx
0875d6d4 +0x114:  movl   $0x0,0xc(%esp)
0875d6dc +0x11c:  mov    %edx,-0x20(%ebp)
0875d6df +0x11f:  mov    -0x1c(%ebp),%edx
0875d6e2 +0x122:  mov    -0x20(%ebp),%eax
0875d6e5 +0x125:  mov    %ecx,0x8(%esp)
0875d6e9 +0x129:  mov    %edx,0x4(%esp)
0875d6ed +0x12d:  mov    %eax,(%esp)
0875d6f0 +0x130:  call   08ae0830 <__umoddi3>
0875d6f5 +0x135:  subl   $0x1,-0x2c(%ebp)
0875d6f9 +0x139:  jne    0875d6c8 <+0x108>
0875d6fb +0x13b:  jmp    0875d5e7 <+0x27>
0875d700 +0x140:  xor    %eax,%eax
0875d702 +0x142:  xor    %esi,%esi
0875d704 +0x144:  mov    %eax,%edx
0875d706 +0x146:  mov    %esi,%ecx
0875d708 +0x148:  jmp    0875d661 <+0xa1>
0875d70d +0x14d:  nop
0875d70e +0x14e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::Integer::Modulo @ 0x875d5c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Modulo(unsigned int) const */

uint __thiscall TaoCrypt::Integer::Modulo(Integer *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int local_40;
  int local_30;
  
  if ((param_1 & param_1 - 1) == 0) {
    uVar2 = param_1 - 1 & **(uint **)(this + 4);
  }
  else {
    local_30 = WordCount(this);
    if (param_1 < 6) {
      if (local_30 == 0) {
        uVar2 = 0;
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        uVar2 = 0;
        local_40 = local_30 * 4;
        do {
          local_40 = local_40 + -4;
          bVar5 = CARRY4(uVar2,*(uint *)(*(int *)(this + 4) + local_40));
          uVar2 = uVar2 + *(uint *)(*(int *)(this + 4) + local_40);
          iVar4 = iVar4 + (uint)bVar5;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
      }
      uVar2 = __umoddi3(uVar2,iVar4,param_1,0);
      iVar4 = *(int *)(this + 0xc);
      goto joined_r0x0875d683;
    }
    uVar2 = 0;
    if (local_30 != 0) {
      iVar1 = *(int *)(this + 4);
      uVar2 = 0;
      iVar4 = local_30 * 4;
      do {
        iVar4 = iVar4 + -4;
        uVar2 = __umoddi3(*(undefined4 *)(iVar1 + iVar4),uVar2,param_1,0);
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
  }
  iVar4 = *(int *)(this + 0xc);
joined_r0x0875d683:
  if (iVar4 != 1) {
    return uVar2;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = param_1 - uVar2;
  }
  return uVar3;
}
```
