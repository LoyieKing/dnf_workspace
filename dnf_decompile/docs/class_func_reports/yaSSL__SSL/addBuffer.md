# addBuffer

`_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE`

`yaSSL::SSL::addBuffer(yaSSL::output_buffer*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x08752610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08752610  _ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE
#           yaSSL::SSL::addBuffer(yaSSL::output_buffer*)
# range [0x08752610, 0x08752689]
08752610 +0x00:  push   %ebp
08752611 +0x01:  mov    %esp,%ebp
08752613 +0x03:  push   %esi
08752614 +0x04:  push   %ebx
08752615 +0x05:  call   08722df8 <__i686.get_pc_thunk.bx>
0875261a +0x0a:  add    $0xc1a57e,%ebx
08752620 +0x10:  sub    $0x10,%esp
08752623 +0x13:  mov    0x8(%ebp),%eax
08752626 +0x16:  add    $0x9c0,%eax
0875262b +0x1b:  mov    %eax,(%esp)
0875262e +0x1e:  call   0874e950 <_ZN5yaSSL7Buffers12useHandShakeEv>  ; yaSSL::Buffers::useHandShake()
08752633 +0x23:  mov    %eax,%esi
08752635 +0x25:  movb   $0x0,0x4(%esp)
0875263a +0x2a:  movl   $0xc,(%esp)
08752641 +0x31:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
08752646 +0x36:  movl   $0x0,(%eax)
0875264c +0x3c:  movl   $0x0,0x4(%eax)
08752653 +0x43:  mov    0xc(%ebp),%edx
08752656 +0x46:  mov    %edx,0x8(%eax)
08752659 +0x49:  mov    0x4(%esi),%edx
0875265c +0x4c:  test   %edx,%edx
0875265e +0x4e:  je     08752678 <+0x68>
08752660 +0x50:  mov    %eax,0x4(%edx)
08752663 +0x53:  mov    0x4(%esi),%edx
08752666 +0x56:  mov    %edx,(%eax)
08752668 +0x58:  addl   $0x1,0x8(%esi)
0875266c +0x5c:  mov    %eax,0x4(%esi)
0875266f +0x5f:  add    $0x10,%esp
08752672 +0x62:  pop    %ebx
08752673 +0x63:  pop    %esi
08752674 +0x64:  pop    %ebp
08752675 +0x65:  ret
08752676 +0x66:  xchg   %ax,%ax
08752678 +0x68:  addl   $0x1,0x8(%esi)
0875267c +0x6c:  mov    %eax,(%esi)
0875267e +0x6e:  mov    %eax,0x4(%esi)
08752681 +0x71:  add    $0x10,%esp
08752684 +0x74:  pop    %ebx
08752685 +0x75:  pop    %esi
08752686 +0x76:  pop    %ebp
08752687 +0x77:  ret
08752688 +0x78:  nop
08752689 +0x79:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::addBuffer @ 0x8752610

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::addBuffer(yaSSL::output_buffer*) */

void __thiscall yaSSL::SSL::addBuffer(SSL *this,output_buffer *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)Buffers::useHandShake((Buffers *)(this + 0x9c0));
  puVar2 = operator_new__(0xc,0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = param_1;
  if (puVar1[1] != 0) {
    *(undefined4 **)(puVar1[1] + 4) = puVar2;
    *puVar2 = puVar1[1];
    puVar1[2] = puVar1[2] + 1;
    puVar1[1] = puVar2;
    return;
  }
  puVar1[2] = puVar1[2] + 1;
  *puVar1 = puVar2;
  puVar1[1] = puVar2;
  return;
}
```
