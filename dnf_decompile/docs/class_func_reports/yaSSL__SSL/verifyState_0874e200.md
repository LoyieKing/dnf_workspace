# verifyState

`_ZN5yaSSL3SSL11verifyStateERKNS_17RecordLayerHeaderE`

`yaSSL::SSL::verifyState(yaSSL::RecordLayerHeader const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e200  _ZN5yaSSL3SSL11verifyStateERKNS_17RecordLayerHeaderE
#           yaSSL::SSL::verifyState(yaSSL::RecordLayerHeader const&)
# range [0x0874e200, 0x0874e29c]
0874e200 +0x00:  push   %ebp
0874e201 +0x01:  mov    %esp,%ebp
0874e203 +0x03:  sub    $0x38,%esp
0874e206 +0x06:  mov    %ebx,-0xc(%ebp)
0874e209 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874e20e +0x0e:  add    $0xc1e98a,%ebx
0874e214 +0x14:  mov    %esi,-0x8(%ebp)
0874e217 +0x17:  mov    0x8(%ebp),%esi
0874e21a +0x1a:  mov    %edi,-0x4(%ebp)
0874e21d +0x1d:  mov    0xc(%ebp),%edi
0874e220 +0x20:  mov    %esi,(%esp)
0874e223 +0x23:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0874e228 +0x28:  test   %eax,%eax
0874e22a +0x2a:  jne    0874e248 <+0x48>
0874e22c +0x2c:  cmpb   $0x3,0x4(%edi)
0874e230 +0x30:  jne    0874e238 <+0x38>
0874e232 +0x32:  cmpb   $0x2,0x5(%edi)
0874e236 +0x36:  jbe    0874e258 <+0x58>
0874e238 +0x38:  movl   $0x75,0x4(%esp)
0874e240 +0x40:  mov    %esi,(%esp)
0874e243 +0x43:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874e248 +0x48:  mov    -0xc(%ebp),%ebx
0874e24b +0x4b:  mov    -0x8(%ebp),%esi
0874e24e +0x4e:  mov    -0x4(%ebp),%edi
0874e251 +0x51:  mov    %ebp,%esp
0874e253 +0x53:  pop    %ebp
0874e254 +0x54:  ret
0874e255 +0x55:  lea    0x0(%esi),%esi
0874e258 +0x58:  lea    0x8ec(%esi),%edx
0874e25e +0x5e:  mov    %edx,(%esp)
0874e261 +0x61:  mov    %edx,-0x1c(%ebp)
0874e264 +0x64:  call   0874de80 <_ZNK5yaSSL6States9getRecordEv>  ; yaSSL::States::getRecord() const
0874e269 +0x69:  mov    -0x1c(%ebp),%edx
0874e26c +0x6c:  mov    (%eax),%eax
0874e26e +0x6e:  test   %eax,%eax
0874e270 +0x70:  jne    0874e288 <+0x88>
0874e272 +0x72:  movl   $0x6a,0x4(%esp)
0874e27a +0x7a:  mov    %esi,(%esp)
0874e27d +0x7d:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874e282 +0x82:  jmp    0874e248 <+0x48>
0874e284 +0x84:  lea    0x0(%esi,%eiz,1),%esi
0874e288 +0x88:  cmpl   $0x17,(%edi)
0874e28b +0x8b:  jne    0874e248 <+0x48>
0874e28d +0x8d:  mov    %edx,(%esp)
0874e290 +0x90:  call   0874de90 <_ZNK5yaSSL6States12getHandShakeEv>  ; yaSSL::States::getHandShake() const
0874e295 +0x95:  cmpl   $0x3,(%eax)
0874e298 +0x98:  jne    0874e272 <+0x72>
0874e29a +0x9a:  jmp    0874e248 <+0x48>
0874e29c +0x9c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::verifyState @ 0x874e200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verifyState(yaSSL::RecordLayerHeader const&) */

void __thiscall yaSSL::SSL::verifyState(SSL *this,RecordLayerHeader *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    if ((param_1[4] == (RecordLayerHeader)0x3) && ((byte)param_1[5] < 3)) {
      piVar2 = (int *)States::getRecord((States *)(this + 0x8ec));
      if ((*piVar2 == 0) ||
         ((*(int *)param_1 == 0x17 &&
          (piVar2 = (int *)States::getHandShake((States *)(this + 0x8ec)), *piVar2 != 3)))) {
        SetError(this,0x6a);
      }
    }
    else {
      SetError(this,0x75);
    }
  }
  return;
}
```
