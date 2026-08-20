# dispatch

`_ZN25DB_AradDatabaseDispatcher8dispatchEiiP6Stream`

`DB_AradDatabaseDispatcher::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_AradDatabaseDispatcher` | `0x0844bcac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844bcac  _ZN25DB_AradDatabaseDispatcher8dispatchEiiP6Stream
#           DB_AradDatabaseDispatcher::dispatch(int, int, Stream*)
# range [0x0844bcac, 0x0844bd5b]
0844bcac +0x00:  push   %ebp
0844bcad +0x01:  mov    %esp,%ebp
0844bcaf +0x03:  push   %ebx
0844bcb0 +0x04:  sub    $0x34,%esp
0844bcb3 +0x07:  movl   $0x0,-0x20(%ebp)
0844bcba +0x0e:  lea    -0x20(%ebp),%eax
0844bcbd +0x11:  mov    %eax,0x4(%esp)
0844bcc1 +0x15:  mov    0x14(%ebp),%eax
0844bcc4 +0x18:  mov    %eax,(%esp)
0844bcc7 +0x1b:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0844bccc +0x20:  mov    -0x20(%ebp),%eax
0844bccf +0x23:  mov    0x8(%ebp),%edx
0844bcd2 +0x26:  add    $0x4,%edx
0844bcd5 +0x29:  mov    %eax,0x4(%esp)
0844bcd9 +0x2d:  mov    %edx,(%esp)
0844bcdc +0x30:  call   081850e0 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)
0844bce1 +0x35:  mov    %eax,-0xc(%ebp)
0844bce4 +0x38:  cmpl   $0x0,-0xc(%ebp)
0844bce8 +0x3c:  jne    0844bd2e <+0x82>
0844bcea +0x3e:  mov    -0x20(%ebp),%ebx
0844bced +0x41:  movl   $0x5,0xc(%esp)
0844bcf5 +0x49:  movl   $0xbc8b,0x8(%esp)
0844bcfd +0x51:  movl   $&_ZZN25DB_AradDatabaseDispatcher8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0844bd05 +0x59:  lea    -0x1c(%ebp),%eax
0844bd08 +0x5c:  mov    %eax,(%esp)
0844bd0b +0x5f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844bd10 +0x64:  mov    %ebx,0x8(%esp)
0844bd14 +0x68:  movl   $"[DISPATCHER_ARAD] Invalid Internal Packet Code. (code:%d)",0x4(%esp)
0844bd1c +0x70:  lea    -0x1c(%ebp),%eax
0844bd1f +0x73:  mov    %eax,(%esp)
0844bd22 +0x76:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844bd27 +0x7b:  mov    $0x0,%eax
0844bd2c +0x80:  jmp    0844bd55 <+0xa9>
0844bd2e +0x82:  mov    -0xc(%ebp),%eax
0844bd31 +0x85:  mov    (%eax),%eax
0844bd33 +0x87:  add    $0x8,%eax
0844bd36 +0x8a:  mov    (%eax),%edx
0844bd38 +0x8c:  mov    0x14(%ebp),%eax
0844bd3b +0x8f:  mov    %eax,0xc(%esp)
0844bd3f +0x93:  mov    0x10(%ebp),%eax
0844bd42 +0x96:  mov    %eax,0x8(%esp)
0844bd46 +0x9a:  mov    0xc(%ebp),%eax
0844bd49 +0x9d:  mov    %eax,0x4(%esp)
0844bd4d +0xa1:  mov    -0xc(%ebp),%eax
0844bd50 +0xa4:  mov    %eax,(%esp)
0844bd53 +0xa7:  call   *%edx
0844bd55 +0xa9:  add    $0x34,%esp
0844bd58 +0xac:  pop    %ebx
0844bd59 +0xad:  pop    %ebp
0844bd5a +0xae:  ret
0844bd5b +0xaf:  nop
```

## 反编译 C

```c
// DB_AradDatabaseDispatcher::dispatch @ 0x844bcac

/* DB_AradDatabaseDispatcher::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_AradDatabaseDispatcher::dispatch
          (DB_AradDatabaseDispatcher *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_24;
  cMyTrace local_20 [16];
  int *local_10;
  
  local_24 = 0;
  Stream::operator>>(param_3,&local_24);
  local_10 = (int *)ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher(this + 4,local_24);
  iVar1 = local_24;
  if (local_10 == (int *)0x0) {
    cMyTrace::cMyTrace(local_20,
                       "virtual bool DB_AradDatabaseDispatcher::dispatch(int, int, Stream*)",0xbc8b,
                       5);
    cMyTrace::operator()(local_20,"[DISPATCHER_ARAD] Invalid Internal Packet Code. (code:%d)",iVar1)
    ;
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*local_10 + 8))(local_10,param_1,param_2,param_3);
  }
  return uVar2;
}
```
