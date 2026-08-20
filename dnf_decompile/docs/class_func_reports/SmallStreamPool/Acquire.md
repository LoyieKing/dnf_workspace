# Acquire

`_ZN15SmallStreamPool7AcquireEPKci`

`SmallStreamPool::Acquire(char const*, int)`

| 类 | 地址 |
|---|---|
| `SmallStreamPool` | `0x0828ff74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828ff74  _ZN15SmallStreamPool7AcquireEPKci
#           SmallStreamPool::Acquire(char const*, int)
# range [0x0828ff74, 0x08290003]
0828ff74 +0x00:  push   %ebp
0828ff75 +0x01:  mov    %esp,%ebp
0828ff77 +0x03:  push   %esi
0828ff78 +0x04:  push   %ebx
0828ff79 +0x05:  sub    $0x20,%esp
0828ff7c +0x08:  mov    0x8(%ebp),%eax
0828ff7f +0x0b:  mov    %eax,0x4(%esp)
0828ff83 +0x0f:  lea    -0x10(%ebp),%eax
0828ff86 +0x12:  mov    %eax,(%esp)
0828ff89 +0x15:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0828ff8e +0x1a:  mov    0x8(%ebp),%eax
0828ff91 +0x1d:  mov    0x18(%eax),%eax
0828ff94 +0x20:  mov    %eax,(%esp)
0828ff97 +0x23:  call   082ad42a <_GLOBAL__I__ZN4CLog5this_E+0x9851>  ; global constructors keyed to CLog::this_+0x9851
0828ff9c +0x28:  mov    %eax,-0xc(%ebp)
0828ff9f +0x2b:  cmpl   $0x0,-0xc(%ebp)
0828ffa3 +0x2f:  jne    0828ffac <+0x38>
0828ffa5 +0x31:  mov    $0x0,%ebx
0828ffaa +0x36:  jmp    0828ffef <+0x7b>
0828ffac +0x38:  mov    -0xc(%ebp),%eax
0828ffaf +0x3b:  mov    0xc(%ebp),%edx
0828ffb2 +0x3e:  mov    %edx,0x18(%eax)
0828ffb5 +0x41:  mov    -0xc(%ebp),%eax
0828ffb8 +0x44:  mov    0x10(%ebp),%edx
0828ffbb +0x47:  mov    %edx,0x1c(%eax)
0828ffbe +0x4a:  mov    -0xc(%ebp),%eax
0828ffc1 +0x4d:  movl   $0x1,0x20(%eax)
0828ffc8 +0x54:  mov    -0xc(%ebp),%eax
0828ffcb +0x57:  movb   $0x1,0x24(%eax)
0828ffcf +0x5b:  mov    -0xc(%ebp),%ebx
0828ffd2 +0x5e:  jmp    0828ffef <+0x7b>
0828ffd4 +0x60:  mov    %edx,%ebx
0828ffd6 +0x62:  mov    %eax,%esi
0828ffd8 +0x64:  lea    -0x10(%ebp),%eax
0828ffdb +0x67:  mov    %eax,(%esp)
0828ffde +0x6a:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0828ffe3 +0x6f:  mov    %esi,%eax
0828ffe5 +0x71:  mov    %ebx,%edx
0828ffe7 +0x73:  mov    %eax,(%esp)
0828ffea +0x76:  call   08ae3750 <_Unwind_Resume>
0828ffef +0x7b:  lea    -0x10(%ebp),%eax
0828fff2 +0x7e:  mov    %eax,(%esp)
0828fff5 +0x81:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0828fffa +0x86:  mov    %ebx,%eax
0828fffc +0x88:  add    $0x20,%esp
0828ffff +0x8b:  pop    %ebx
08290000 +0x8c:  pop    %esi
08290001 +0x8d:  pop    %ebp
08290002 +0x8e:  ret
08290003 +0x8f:  nop
```

## 反编译 C

```c
// SmallStreamPool::Acquire @ 0x828ff74

/* SmallStreamPool::Acquire(char const*, int) */

int __thiscall SmallStreamPool::Acquire(SmallStreamPool *this,char *param_1,int param_2)

{
  int iVar1;
  Guard<Mutex> local_14 [4];
  int local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)this);
                    /* try { // try from 0828ff97 to 0828ff9b has its CatchHandler @ 0828ffd4 */
  local_10 = DynamicPool<SmallStream>::Acquire(*(DynamicPool<SmallStream> **)(this + 0x18));
  if (local_10 == 0) {
    iVar1 = 0;
  }
  else {
    *(char **)(local_10 + 0x18) = param_1;
    *(int *)(local_10 + 0x1c) = param_2;
    *(undefined4 *)(local_10 + 0x20) = 1;
    *(undefined1 *)(local_10 + 0x24) = 1;
    iVar1 = local_10;
  }
  Guard<Mutex>::~Guard(local_14);
  return iVar1;
}
```
