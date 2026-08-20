# Load

`_ZN29AvatarFixedHiddenOptionServer4LoadEv`

`AvatarFixedHiddenOptionServer::Load()`

| 类 | 地址 |
|---|---|
| `AvatarFixedHiddenOptionServer` | `0x0817e154` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817e154  _ZN29AvatarFixedHiddenOptionServer4LoadEv
#           AvatarFixedHiddenOptionServer::Load()
# range [0x0817e154, 0x0817e1e1]
0817e154 +0x00:  push   %ebp
0817e155 +0x01:  mov    %esp,%ebp
0817e157 +0x03:  sub    $0x38,%esp
0817e15a +0x06:  movl   $0x0,0x14(%esp)
0817e162 +0x0e:  movl   $0x1,0x10(%esp)
0817e16a +0x16:  movl   $0x9,0xc(%esp)
0817e172 +0x1e:  movl   $0x1a,0x8(%esp)
0817e17a +0x26:  movl   $&_ZZN29AvatarFixedHiddenOptionServer4LoadEvE19__PRETTY_FUNCTION__,0x4(%esp)
0817e182 +0x2e:  lea    -0x18(%ebp),%eax
0817e185 +0x31:  mov    %eax,(%esp)
0817e188 +0x34:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0817e18d +0x39:  movl   $"\t- Loading Avatar Hidden Option - ",0x4(%esp)
0817e195 +0x41:  lea    -0x18(%ebp),%eax
0817e198 +0x44:  mov    %eax,(%esp)
0817e19b +0x47:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0817e1a0 +0x4c:  mov    0x8(%ebp),%eax
0817e1a3 +0x4f:  add    $0x4,%eax
0817e1a6 +0x52:  mov    %eax,(%esp)
0817e1a9 +0x55:  call   088aedce <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv>  ; ARAD::SCRIPT::AvatarFixedHiddenOption::loadScript()
0817e1ae +0x5a:  test   %eax,%eax
0817e1b0 +0x5c:  jne    0817e1c4 <+0x70>
0817e1b2 +0x5e:  mov    0x8(%ebp),%eax
0817e1b5 +0x61:  mov    %eax,(%esp)
0817e1b8 +0x64:  call   0817e3e8 <_ZN29AvatarFixedHiddenOptionServer4InitEv>  ; AvatarFixedHiddenOptionServer::Init()
0817e1bd +0x69:  xor    $0x1,%eax
0817e1c0 +0x6c:  test   %al,%al
0817e1c2 +0x6e:  je     0817e1cb <+0x77>
0817e1c4 +0x70:  mov    $0x1,%eax
0817e1c9 +0x75:  jmp    0817e1d0 <+0x7c>
0817e1cb +0x77:  mov    $0x0,%eax
0817e1d0 +0x7c:  test   %al,%al
0817e1d2 +0x7e:  je     0817e1db <+0x87>
0817e1d4 +0x80:  mov    $0x0,%eax
0817e1d9 +0x85:  jmp    0817e1e0 <+0x8c>
0817e1db +0x87:  mov    $0x1,%eax
0817e1e0 +0x8c:  leave
0817e1e1 +0x8d:  ret
```

## 反编译 C

```c
// AvatarFixedHiddenOptionServer::Load @ 0x817e154

/* AvatarFixedHiddenOptionServer::Load() */

bool __thiscall AvatarFixedHiddenOptionServer::Load(AvatarFixedHiddenOptionServer *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual bool AvatarFixedHiddenOptionServer::Load()",0x1a,9,true,false
                    );
  cMyTrace::operator()(local_1c,"\t- Loading Avatar Hidden Option - ");
  iVar3 = ARAD::SCRIPT::AvatarFixedHiddenOption::loadScript((AvatarFixedHiddenOption *)(this + 4));
  if ((iVar3 == 0) && (cVar2 = Init(this), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}
```
