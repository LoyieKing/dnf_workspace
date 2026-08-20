# Process

`_ZN5yaSSL17ServerKeyExchange7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::ServerKeyExchange::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyExchange` | `0x0874b5f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b5f0  _ZN5yaSSL17ServerKeyExchange7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::ServerKeyExchange::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x0874b5f0, 0x0874b669]
0874b5f0 +0x00:  push   %ebp
0874b5f1 +0x01:  mov    %esp,%ebp
0874b5f3 +0x03:  sub    $0x28,%esp
0874b5f6 +0x06:  mov    %ebx,-0xc(%ebp)
0874b5f9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b5fe +0x0e:  add    $0xc2159a,%ebx
0874b604 +0x14:  mov    %esi,-0x8(%ebp)
0874b607 +0x17:  mov    0x10(%ebp),%esi
0874b60a +0x1a:  mov    %edi,-0x4(%ebp)
0874b60d +0x1d:  mov    0x8(%ebp),%edi
0874b610 +0x20:  mov    %esi,0x4(%esp)
0874b614 +0x24:  mov    %edi,(%esp)
0874b617 +0x27:  call   0874b520 <_ZN5yaSSL17ServerKeyExchange9createKeyERNS_3SSLE>  ; yaSSL::ServerKeyExchange::createKey(yaSSL::SSL&)
0874b61c +0x2c:  mov    %esi,(%esp)
0874b61f +0x2f:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0874b624 +0x34:  test   %eax,%eax
0874b626 +0x36:  jne    0874b654 <+0x64>
0874b628 +0x38:  mov    0x8(%edi),%eax
0874b62b +0x3b:  mov    0xc(%ebp),%ecx
0874b62e +0x3e:  mov    (%eax),%edx
0874b630 +0x40:  mov    %ecx,0x8(%esp)
0874b634 +0x44:  mov    %eax,(%esp)
0874b637 +0x47:  mov    %esi,0x4(%esp)
0874b63b +0x4b:  call   *0xc(%edx)
0874b63e +0x4e:  mov    %esi,(%esp)
0874b641 +0x51:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
0874b646 +0x56:  mov    %eax,(%esp)
0874b649 +0x59:  call   0874df20 <_ZN5yaSSL6States9useClientEv>  ; yaSSL::States::useClient()
0874b64e +0x5e:  movl   $0x3,(%eax)
0874b654 +0x64:  mov    -0xc(%ebp),%ebx
0874b657 +0x67:  mov    -0x8(%ebp),%esi
0874b65a +0x6a:  mov    -0x4(%ebp),%edi
0874b65d +0x6d:  mov    %ebp,%esp
0874b65f +0x6f:  pop    %ebp
0874b660 +0x70:  ret
0874b661 +0x71:  nop
0874b662 +0x72:  lea    0x0(%esi,%eiz,1),%esi
0874b669 +0x79:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ServerKeyExchange::Process @ 0x874b5f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::ServerKeyExchange::Process(ServerKeyExchange *this,input_buffer *param_1,SSL *param_2)

{
  int iVar1;
  States *this_00;
  undefined4 *puVar2;
  
  createKey(this,param_2);
  iVar1 = SSL::GetError(param_2);
  if (iVar1 == 0) {
    (**(code **)(**(int **)(this + 8) + 0xc))(*(int **)(this + 8),param_2,param_1);
    this_00 = (States *)SSL::useStates(param_2);
    puVar2 = (undefined4 *)States::useClient(this_00);
    *puVar2 = 3;
  }
  return;
}
```
