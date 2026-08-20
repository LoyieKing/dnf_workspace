# addData

`_ZN5yaSSL3SSL7addDataEPNS_12input_bufferE`

`yaSSL::SSL::addData(yaSSL::input_buffer*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x08752690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08752690  _ZN5yaSSL3SSL7addDataEPNS_12input_bufferE
#           yaSSL::SSL::addData(yaSSL::input_buffer*)
# range [0x08752690, 0x0875271c]
08752690 +0x00:  push   %ebp
08752691 +0x01:  mov    %esp,%ebp
08752693 +0x03:  sub    $0x28,%esp
08752696 +0x06:  mov    %ebx,-0xc(%ebp)
08752699 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875269e +0x0e:  add    $0xc1a4fa,%ebx
087526a4 +0x14:  mov    %edi,-0x4(%ebp)
087526a7 +0x17:  mov    0x8(%ebp),%edi
087526aa +0x1a:  mov    %esi,-0x8(%ebp)
087526ad +0x1d:  lea    0x9c0(%edi),%eax
087526b3 +0x23:  mov    %eax,(%esp)
087526b6 +0x26:  call   0874e940 <_ZN5yaSSL7Buffers7useDataEv>  ; yaSSL::Buffers::useData()
087526bb +0x2b:  mov    %eax,%esi
087526bd +0x2d:  movb   $0x0,0x4(%esp)
087526c2 +0x32:  movl   $0xc,(%esp)
087526c9 +0x39:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
087526ce +0x3e:  movl   $0x0,(%eax)
087526d4 +0x44:  movl   $0x0,0x4(%eax)
087526db +0x4b:  mov    0xc(%ebp),%edx
087526de +0x4e:  mov    %edx,0x8(%eax)
087526e1 +0x51:  mov    0x4(%esi),%edx
087526e4 +0x54:  test   %edx,%edx
087526e6 +0x56:  je     08752718 <+0x88>
087526e8 +0x58:  mov    %eax,0x4(%edx)
087526eb +0x5b:  mov    0x4(%esi),%edx
087526ee +0x5e:  mov    %edx,(%eax)
087526f0 +0x60:  addl   $0x1,0x8(%esi)
087526f4 +0x64:  mov    %eax,0x4(%esi)
087526f7 +0x67:  cmpb   $0x0,0x9de(%edi)
087526fe +0x6e:  jne    08752707 <+0x77>
08752700 +0x70:  movb   $0x1,0x9de(%edi)
08752707 +0x77:  mov    -0xc(%ebp),%ebx
0875270a +0x7a:  mov    -0x8(%ebp),%esi
0875270d +0x7d:  mov    -0x4(%ebp),%edi
08752710 +0x80:  mov    %ebp,%esp
08752712 +0x82:  pop    %ebp
08752713 +0x83:  ret
08752714 +0x84:  lea    0x0(%esi,%eiz,1),%esi
08752718 +0x88:  mov    %eax,(%esi)
0875271a +0x8a:  jmp    087526f0 <+0x60>
0875271c +0x8c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::addData @ 0x8752690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::addData(yaSSL::input_buffer*) */

void __thiscall yaSSL::SSL::addData(SSL *this,input_buffer *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)Buffers::useData((Buffers *)(this + 0x9c0));
  puVar2 = operator_new__(0xc,0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = param_1;
  if (puVar1[1] == 0) {
    *puVar1 = puVar2;
  }
  else {
    *(undefined4 **)(puVar1[1] + 4) = puVar2;
    *puVar2 = puVar1[1];
  }
  puVar1[2] = puVar1[2] + 1;
  puVar1[1] = puVar2;
  if (this[0x9de] == (SSL)0x0) {
    this[0x9de] = (SSL)0x1;
  }
  return;
}
```
