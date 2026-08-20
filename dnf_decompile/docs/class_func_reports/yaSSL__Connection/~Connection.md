# ~Connection

`_ZN5yaSSL10ConnectionD1Ev`

`yaSSL::Connection::~Connection()`

| 类 | 地址 |
|---|---|
| `yaSSL::Connection` | `0x0874bba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874bba0  _ZN5yaSSL10ConnectionD1Ev
#           yaSSL::Connection::~Connection()
# range [0x0874bba0, 0x0874bbea]
0874bba0 +0x00:  push   %ebp
0874bba1 +0x01:  mov    %esp,%ebp
0874bba3 +0x03:  sub    $0x18,%esp
0874bba6 +0x06:  mov    %ebx,-0x8(%ebp)
0874bba9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874bbae +0x0e:  add    $0xc20fea,%ebx
0874bbb4 +0x14:  mov    %esi,-0x4(%ebp)
0874bbb7 +0x17:  mov    0x8(%ebp),%esi
0874bbba +0x1a:  mov    %esi,(%esp)
0874bbbd +0x1d:  call   08747cb0 <_ZN5yaSSL10Connection11CleanMasterEv>  ; yaSSL::Connection::CleanMaster()
0874bbc2 +0x22:  mov    %esi,(%esp)
0874bbc5 +0x25:  call   0874bb40 <_ZN5yaSSL10Connection14CleanPreMasterEv>  ; yaSSL::Connection::CleanPreMaster()
0874bbca +0x2a:  movb   $0x0,0x4(%esp)
0874bbcf +0x2f:  mov    (%esi),%eax
0874bbd1 +0x31:  mov    %eax,(%esp)
0874bbd4 +0x34:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874bbd9 +0x39:  mov    -0x8(%ebp),%ebx
0874bbdc +0x3c:  mov    -0x4(%ebp),%esi
0874bbdf +0x3f:  mov    %ebp,%esp
0874bbe1 +0x41:  pop    %ebp
0874bbe2 +0x42:  ret
0874bbe3 +0x43:  nop
0874bbe4 +0x44:  lea    0x0(%esi),%esi
0874bbea +0x4a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::Connection::~Connection @ 0x874bba0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Connection::~Connection() */

void __thiscall yaSSL::Connection::~Connection(Connection *this)

{
  CleanMaster(this);
  CleanPreMaster(this);
  operator_delete__(*(undefined4 *)this,0);
  return;
}
```
