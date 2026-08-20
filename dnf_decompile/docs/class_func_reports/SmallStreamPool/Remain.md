# Remain

`_ZN15SmallStreamPool6RemainEv`

`SmallStreamPool::Remain()`

| 类 | 地址 |
|---|---|
| `SmallStreamPool` | `0x082900f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082900f6  _ZN15SmallStreamPool6RemainEv
#           SmallStreamPool::Remain()
# range [0x082900f6, 0x0829014f]
082900f6 +0x00:  push   %ebp
082900f7 +0x01:  mov    %esp,%ebp
082900f9 +0x03:  push   %esi
082900fa +0x04:  push   %ebx
082900fb +0x05:  sub    $0x20,%esp
082900fe +0x08:  mov    0x8(%ebp),%eax
08290101 +0x0b:  mov    %eax,0x4(%esp)
08290105 +0x0f:  lea    -0xc(%ebp),%eax
08290108 +0x12:  mov    %eax,(%esp)
0829010b +0x15:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08290110 +0x1a:  mov    0x8(%ebp),%eax
08290113 +0x1d:  mov    0x18(%eax),%eax
08290116 +0x20:  mov    %eax,(%esp)
08290119 +0x23:  call   082ad7f2 <_GLOBAL__I__ZN4CLog5this_E+0x9c19>  ; global constructors keyed to CLog::this_+0x9c19
0829011e +0x28:  mov    %eax,%ebx
08290120 +0x2a:  lea    -0xc(%ebp),%eax
08290123 +0x2d:  mov    %eax,(%esp)
08290126 +0x30:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0829012b +0x35:  mov    %ebx,%eax
0829012d +0x37:  add    $0x20,%esp
08290130 +0x3a:  pop    %ebx
08290131 +0x3b:  pop    %esi
08290132 +0x3c:  pop    %ebp
08290133 +0x3d:  ret
08290134 +0x3e:  mov    %edx,%ebx
08290136 +0x40:  mov    %eax,%esi
08290138 +0x42:  lea    -0xc(%ebp),%eax
0829013b +0x45:  mov    %eax,(%esp)
0829013e +0x48:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08290143 +0x4d:  mov    %esi,%eax
08290145 +0x4f:  mov    %ebx,%edx
08290147 +0x51:  mov    %eax,(%esp)
0829014a +0x54:  call   08ae3750 <_Unwind_Resume>
0829014f +0x59:  nop
```

## 反编译 C

```c
// SmallStreamPool::Remain @ 0x82900f6

/* SmallStreamPool::Remain() */

undefined4 __thiscall SmallStreamPool::Remain(SmallStreamPool *this)

{
  undefined4 uVar1;
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)this);
                    /* try { // try from 08290119 to 0829011d has its CatchHandler @ 08290134 */
  uVar1 = DynamicPool<SmallStream>::Remain(*(DynamicPool<SmallStream> **)(this + 0x18));
  Guard<Mutex>::~Guard(local_10);
  return uVar1;
}
```
