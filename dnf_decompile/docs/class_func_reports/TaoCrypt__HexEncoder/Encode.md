# Encode

`_ZN8TaoCrypt10HexEncoder6EncodeEv`

`TaoCrypt::HexEncoder::Encode()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::HexEncoder` | `0x08756c00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08756c00  _ZN8TaoCrypt10HexEncoder6EncodeEv
#           TaoCrypt::HexEncoder::Encode()
# range [0x08756c00, 0x08756cbe]
08756c00 +0x00:  push   %ebp
08756c01 +0x01:  mov    %esp,%ebp
08756c03 +0x03:  push   %edi
08756c04 +0x04:  push   %esi
08756c05 +0x05:  push   %ebx
08756c06 +0x06:  sub    $0x4c,%esp
08756c09 +0x09:  mov    0x8(%ebp),%esi
08756c0c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08756c11 +0x11:  add    $0xc15f87,%ebx
08756c17 +0x17:  mov    0xc(%esi),%eax
08756c1a +0x1a:  mov    (%eax),%eax
08756c1c +0x1c:  movl   $0x0,0x10(%esp)
08756c24 +0x24:  mov    %eax,%edi
08756c26 +0x26:  add    %edi,%edi
08756c28 +0x28:  mov    %edi,0xc(%esp)
08756c2c +0x2c:  mov    %eax,-0x1c(%ebp)
08756c2f +0x2f:  mov    (%esi),%eax
08756c31 +0x31:  mov    %eax,0x8(%esp)
08756c35 +0x35:  mov    0x4(%esi),%eax
08756c38 +0x38:  mov    %eax,0x4(%esp)
08756c3c +0x3c:  lea    0x8(%esi),%eax
08756c3f +0x3f:  mov    %eax,(%esp)
08756c42 +0x42:  call   087572d0 <_ZN8TaoCrypt10HexDecoder6DecodeEv+0xd0>  ; TaoCrypt::HexDecoder::Decode()+0xd0
08756c47 +0x47:  mov    %edi,(%esi)
08756c49 +0x49:  mov    %eax,0x4(%esi)
08756c4c +0x4c:  mov    -0x1c(%ebp),%eax
08756c4f +0x4f:  test   %eax,%eax
08756c51 +0x51:  je     08756ca7 <+0xa7>
08756c53 +0x53:  lea    -0x6678e1(%ebx),%edx
08756c59 +0x59:  xor    %eax,%eax
08756c5b +0x5b:  mov    %edx,-0x20(%ebp)
08756c5e +0x5e:  xchg   %ax,%ax
08756c60 +0x60:  mov    0xc(%esi),%edx
08756c63 +0x63:  mov    0xc(%edx),%ecx
08756c66 +0x66:  lea    0x1(%ecx),%edi
08756c69 +0x69:  mov    %edi,0xc(%edx)
08756c6c +0x6c:  mov    0x4(%edx),%edx
08756c6f +0x6f:  lea    0x1(%eax),%edi
08756c72 +0x72:  mov    %edi,-0x2c(%ebp)
08756c75 +0x75:  mov    -0x20(%ebp),%edi
08756c78 +0x78:  movzbl (%edx,%ecx,1),%edx
08756c7c +0x7c:  mov    %edx,%ecx
08756c7e +0x7e:  and    $0xf,%edx
08756c81 +0x81:  shr    $0x4,%ecx
08756c84 +0x84:  movzbl (%edi,%ecx,1),%ecx
08756c88 +0x88:  mov    0x4(%esi),%edi
08756c8b +0x8b:  mov    %cl,(%edi,%eax,1)
08756c8e +0x8e:  mov    -0x20(%ebp),%edi
08756c91 +0x91:  add    $0x2,%eax
08756c94 +0x94:  mov    0x4(%esi),%ecx
08756c97 +0x97:  movzbl (%edi,%edx,1),%edx
08756c9b +0x9b:  mov    -0x2c(%ebp),%edi
08756c9e +0x9e:  mov    %dl,(%ecx,%edi,1)
08756ca1 +0xa1:  subl   $0x1,-0x1c(%ebp)
08756ca5 +0xa5:  jne    08756c60 <+0x60>
08756ca7 +0xa7:  mov    %esi,0x4(%esp)
08756cab +0xab:  mov    0xc(%esi),%eax
08756cae +0xae:  mov    %eax,(%esp)
08756cb1 +0xb1:  call   08758830 <_ZN8TaoCrypt6Source5resetERNS_5BlockIhNS_20AllocatorWithCleanupIhEEEE>  ; TaoCrypt::Source::reset(TaoCrypt::Block<unsigned char, TaoCrypt::AllocatorWithCleanup<unsigned char> >&)
08756cb6 +0xb6:  add    $0x4c,%esp
08756cb9 +0xb9:  pop    %ebx
08756cba +0xba:  pop    %esi
08756cbb +0xbb:  pop    %edi
08756cbc +0xbc:  pop    %ebp
08756cbd +0xbd:  ret
08756cbe +0xbe:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::HexEncoder::Encode @ 0x8756c00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::HexEncoder::Encode() */

void __thiscall TaoCrypt::HexEncoder::Encode(HexEncoder *this)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_20;
  
  local_20 = **(int **)(this + 0xc);
  uVar5 = StdReallocate<unsigned_char,TaoCrypt::AllocatorWithCleanup<unsigned_char>>
                    (this + 8,*(undefined4 *)(this + 4),*(undefined4 *)this,local_20 * 2,0);
  *(int *)this = local_20 * 2;
  *(undefined4 *)(this + 4) = uVar5;
  if (local_20 != 0) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(this + 0xc);
      iVar4 = *(int *)(iVar3 + 0xc);
      *(int *)(iVar3 + 0xc) = iVar4 + 1;
      iVar1 = iVar6 + 1;
      bVar2 = *(byte *)(*(int *)(iVar3 + 4) + iVar4);
      *(char *)(*(int *)(this + 4) + iVar6) = "0123456789ABCDEF"[bVar2 >> 4];
      iVar6 = iVar6 + 2;
      *(char *)(*(int *)(this + 4) + iVar1) = "0123456789ABCDEF"[bVar2 & 0xf];
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  Source::reset(*(Source **)(this + 0xc),(Block *)this);
  return;
}
```
