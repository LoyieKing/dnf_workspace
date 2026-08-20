# Acquire

`_ZN10StreamPool7AcquireEPKci`

`StreamPool::Acquire(char const*, int)`

| 类 | 地址 |
|---|---|
| `StreamPool` | `0x0828fa86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828fa86  _ZN10StreamPool7AcquireEPKci
#           StreamPool::Acquire(char const*, int)
# range [0x0828fa86, 0x0828fb27]
0828fa86 +0x00:  push   %ebp
0828fa87 +0x01:  mov    %esp,%ebp
0828fa89 +0x03:  push   %esi
0828fa8a +0x04:  push   %ebx
0828fa8b +0x05:  sub    $0x20,%esp
0828fa8e +0x08:  mov    0x8(%ebp),%eax
0828fa91 +0x0b:  mov    %eax,0x4(%esp)
0828fa95 +0x0f:  lea    -0x10(%ebp),%eax
0828fa98 +0x12:  mov    %eax,(%esp)
0828fa9b +0x15:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0828faa0 +0x1a:  mov    0x8(%ebp),%eax
0828faa3 +0x1d:  mov    0x18(%eax),%eax
0828faa6 +0x20:  mov    %eax,(%esp)
0828faa9 +0x23:  call   082ac7ae <_GLOBAL__I__ZN4CLog5this_E+0x8bd5>  ; global constructors keyed to CLog::this_+0x8bd5
0828faae +0x28:  mov    %eax,-0xc(%ebp)
0828fab1 +0x2b:  cmpl   $0x0,-0xc(%ebp)
0828fab5 +0x2f:  jne    0828fabe <+0x38>
0828fab7 +0x31:  mov    $0x0,%ebx
0828fabc +0x36:  jmp    0828fb14 <+0x8e>
0828fabe +0x38:  mov    -0xc(%ebp),%eax
0828fac1 +0x3b:  mov    0xc(%ebp),%edx
0828fac4 +0x3e:  mov    %edx,0x18(%eax)
0828fac7 +0x41:  mov    -0xc(%ebp),%eax
0828faca +0x44:  mov    0x10(%ebp),%edx
0828facd +0x47:  mov    %edx,0x1c(%eax)
0828fad0 +0x4a:  mov    -0xc(%ebp),%eax
0828fad3 +0x4d:  movl   $0x0,0x20(%eax)
0828fada +0x54:  movl   $0x0,0x4(%esp)
0828fae2 +0x5c:  mov    -0xc(%ebp),%eax
0828fae5 +0x5f:  mov    %eax,(%esp)
0828fae8 +0x62:  call   0861bec4 <_ZN6Stream14set_big_streamEb>  ; Stream::set_big_stream(bool)
0828faed +0x67:  mov    -0xc(%ebp),%eax
0828faf0 +0x6a:  movb   $0x1,0x24(%eax)
0828faf4 +0x6e:  mov    -0xc(%ebp),%ebx
0828faf7 +0x71:  jmp    0828fb14 <+0x8e>
0828faf9 +0x73:  mov    %edx,%ebx
0828fafb +0x75:  mov    %eax,%esi
0828fafd +0x77:  lea    -0x10(%ebp),%eax
0828fb00 +0x7a:  mov    %eax,(%esp)
0828fb03 +0x7d:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0828fb08 +0x82:  mov    %esi,%eax
0828fb0a +0x84:  mov    %ebx,%edx
0828fb0c +0x86:  mov    %eax,(%esp)
0828fb0f +0x89:  call   08ae3750 <_Unwind_Resume>
0828fb14 +0x8e:  lea    -0x10(%ebp),%eax
0828fb17 +0x91:  mov    %eax,(%esp)
0828fb1a +0x94:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0828fb1f +0x99:  mov    %ebx,%eax
0828fb21 +0x9b:  add    $0x20,%esp
0828fb24 +0x9e:  pop    %ebx
0828fb25 +0x9f:  pop    %esi
0828fb26 +0xa0:  pop    %ebp
0828fb27 +0xa1:  ret
```

## 反编译 C

```c
// StreamPool::Acquire @ 0x828fa86

/* StreamPool::Acquire(char const*, int) */

Stream * __thiscall StreamPool::Acquire(StreamPool *this,char *param_1,int param_2)

{
  Stream *pSVar1;
  Guard<Mutex> local_14 [4];
  Stream *local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)this);
                    /* try { // try from 0828faa9 to 0828faec has its CatchHandler @ 0828faf9 */
  local_10 = (Stream *)DynamicPool<Stream>::Acquire(*(DynamicPool<Stream> **)(this + 0x18));
  if (local_10 == (Stream *)0x0) {
    pSVar1 = (Stream *)0x0;
  }
  else {
    *(char **)(local_10 + 0x18) = param_1;
    *(int *)(local_10 + 0x1c) = param_2;
    *(undefined4 *)(local_10 + 0x20) = 0;
    Stream::set_big_stream(local_10,false);
    local_10[0x24] = (Stream)0x1;
    pSVar1 = local_10;
  }
  Guard<Mutex>::~Guard(local_14);
  return pSVar1;
}
```
