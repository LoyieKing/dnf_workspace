# dispatch

`_ZN8APSystem20DB_UpdateActionPoint8dispatchEiiP6Stream`

`APSystem::DB_UpdateActionPoint::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_UpdateActionPoint` | `0x0812432a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812432a  _ZN8APSystem20DB_UpdateActionPoint8dispatchEiiP6Stream
#           APSystem::DB_UpdateActionPoint::dispatch(int, int, Stream*)
# range [0x0812432a, 0x08124385]
0812432a +0x00:  push   %ebp
0812432b +0x01:  mov    %esp,%ebp
0812432d +0x03:  sub    $0x28,%esp
08124330 +0x06:  movb   $0x0,-0xd(%ebp)
08124334 +0x0a:  lea    -0xd(%ebp),%eax
08124337 +0x0d:  mov    %eax,0x4(%esp)
0812433b +0x11:  mov    0x14(%ebp),%eax
0812433e +0x14:  mov    %eax,(%esp)
08124341 +0x17:  call   0861c47c <_ZN6StreamrsERb>  ; Stream::operator>>(bool&)
08124346 +0x1c:  mov    0x14(%ebp),%eax
08124349 +0x1f:  mov    %eax,(%esp)
0812434c +0x22:  call   081256e4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x447>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x447
08124351 +0x27:  mov    %eax,-0xc(%ebp)
08124354 +0x2a:  cmpl   $0x0,-0xc(%ebp)
08124358 +0x2e:  jne    08124361 <+0x37>
0812435a +0x30:  mov    $0x0,%eax
0812435f +0x35:  jmp    08124383 <+0x59>
08124361 +0x37:  movzbl -0xd(%ebp),%eax
08124365 +0x3b:  movzbl %al,%eax
08124368 +0x3e:  mov    -0xc(%ebp),%edx
0812436b +0x41:  mov    %edx,0x8(%esp)
0812436f +0x45:  mov    %eax,0x4(%esp)
08124373 +0x49:  mov    0x8(%ebp),%eax
08124376 +0x4c:  mov    %eax,(%esp)
08124379 +0x4f:  call   08124386 <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE>  ; APSystem::DB_UpdateActionPoint::Update(bool, APSystem::_SIG_LOAD_ACTION_POINT const&)
0812437e +0x54:  mov    $0x1,%eax
08124383 +0x59:  leave
08124384 +0x5a:  ret
08124385 +0x5b:  nop
```

## 反编译 C

```c
// APSystem::DB_UpdateActionPoint::dispatch @ 0x812432a

/* APSystem::DB_UpdateActionPoint::dispatch(int, int, Stream*) */

bool __thiscall
APSystem::DB_UpdateActionPoint::dispatch
          (DB_UpdateActionPoint *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  bool local_11;
  _SIG_LOAD_ACTION_POINT *local_10;
  
  local_11 = false;
  Stream::operator>>(param_3,&local_11);
  local_10 = Stream::GetOutBuffer<APSystem::_SIG_LOAD_ACTION_POINT>(param_3);
  bVar1 = local_10 != (_SIG_LOAD_ACTION_POINT *)0x0;
  if (bVar1) {
    Update(this,local_11,local_10);
  }
  return bVar1;
}
```
