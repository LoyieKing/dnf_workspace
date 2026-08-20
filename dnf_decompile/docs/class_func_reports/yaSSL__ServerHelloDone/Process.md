# Process

`_ZN5yaSSL15ServerHelloDone7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::ServerHelloDone::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerHelloDone` | `0x08747fe0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747fe0  _ZN5yaSSL15ServerHelloDone7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::ServerHelloDone::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x08747fe0, 0x08748019]
08747fe0 +0x00:  push   %ebp
08747fe1 +0x01:  mov    %esp,%ebp
08747fe3 +0x03:  push   %ebx
08747fe4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08747fe9 +0x09:  add    $0xc24baf,%ebx
08747fef +0x0f:  sub    $0x14,%esp
08747ff2 +0x12:  mov    0x10(%ebp),%eax
08747ff5 +0x15:  mov    %eax,(%esp)
08747ff8 +0x18:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
08747ffd +0x1d:  mov    %eax,(%esp)
08748000 +0x20:  call   0874df20 <_ZN5yaSSL6States9useClientEv>  ; yaSSL::States::useClient()
08748005 +0x25:  movl   $0x4,(%eax)
0874800b +0x2b:  add    $0x14,%esp
0874800e +0x2e:  pop    %ebx
0874800f +0x2f:  pop    %ebp
08748010 +0x30:  ret
08748011 +0x31:  nop
08748012 +0x32:  lea    0x0(%esi,%eiz,1),%esi
08748019 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ServerHelloDone::Process @ 0x8747fe0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHelloDone::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::ServerHelloDone::Process(ServerHelloDone *this,input_buffer *param_1,SSL *param_2)

{
  States *this_00;
  undefined4 *puVar1;
  
  this_00 = (States *)SSL::useStates(param_2);
  puVar1 = (undefined4 *)States::useClient(this_00);
  *puVar1 = 4;
  return;
}
```
