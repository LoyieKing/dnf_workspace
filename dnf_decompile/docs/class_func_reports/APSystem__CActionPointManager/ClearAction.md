# ClearAction

`_ZN8APSystem19CActionPointManager11ClearActionER5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS`

`APSystem::CActionPointManager::ClearAction(CUser&, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)`

| 类 | 地址 |
|---|---|
| `APSystem::CActionPointManager` | `0x08121dcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08121dcc  _ZN8APSystem19CActionPointManager11ClearActionER5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS
#           APSystem::CActionPointManager::ClearAction(CUser&, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
# range [0x08121dcc, 0x08121f1b]
08121dcc +0x000:  push   %ebp
08121dcd +0x001:  mov    %esp,%ebp
08121dcf +0x003:  push   %ebx
08121dd0 +0x004:  sub    $0x34,%esp
08121dd3 +0x007:  movb   $0x0,-0xd(%ebp)
08121dd7 +0x00b:  movl   $0x0,-0xc(%ebp)
08121dde +0x012:  jmp    08121efd <+0x131>
08121de3 +0x017:  mov    -0xc(%ebp),%edx
08121de6 +0x01a:  mov    0x8(%ebp),%ecx
08121de9 +0x01d:  mov    %edx,%eax
08121deb +0x01f:  shl    $0x2,%eax
08121dee +0x022:  add    %edx,%eax
08121df0 +0x024:  add    %eax,%eax
08121df2 +0x026:  add    %edx,%eax
08121df4 +0x028:  mov    0x17(%eax,%ecx,1),%eax
08121df8 +0x02c:  test   %eax,%eax
08121dfa +0x02e:  je     08121f11 <+0x145>
08121e00 +0x034:  mov    -0xc(%ebp),%edx
08121e03 +0x037:  mov    0x8(%ebp),%ecx
08121e06 +0x03a:  mov    %edx,%eax
08121e08 +0x03c:  shl    $0x2,%eax
08121e0b +0x03f:  add    %edx,%eax
08121e0d +0x041:  add    %eax,%eax
08121e0f +0x043:  add    %edx,%eax
08121e11 +0x045:  mov    0x17(%eax,%ecx,1),%eax
08121e15 +0x049:  cmp    0x10(%ebp),%eax
08121e18 +0x04c:  jne    08121ef9 <+0x12d>
08121e1e +0x052:  mov    -0xc(%ebp),%edx
08121e21 +0x055:  mov    %edx,%eax
08121e23 +0x057:  shl    $0x2,%eax
08121e26 +0x05a:  add    %edx,%eax
08121e28 +0x05c:  add    %eax,%eax
08121e2a +0x05e:  add    %edx,%eax
08121e2c +0x060:  add    0x8(%ebp),%eax
08121e2f +0x063:  lea    0x15(%eax),%edx
08121e32 +0x066:  mov    0x14(%ebp),%eax
08121e35 +0x069:  mov    %eax,0x8(%esp)
08121e39 +0x06d:  mov    %edx,0x4(%esp)
08121e3d +0x071:  mov    0x8(%ebp),%eax
08121e40 +0x074:  mov    %eax,(%esp)
08121e43 +0x077:  call   08121f1c <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi>  ; APSystem::CActionPointManager::ClearActionOne(APSystem::_ActionPoint&, int)
08121e48 +0x07c:  test   %al,%al
08121e4a +0x07e:  je     08121ea2 <+0xd6>
08121e4c +0x080:  movb   $0x1,-0xd(%ebp)
08121e50 +0x084:  mov    -0xc(%ebp),%edx
08121e53 +0x087:  mov    0x8(%ebp),%ecx
08121e56 +0x08a:  mov    %edx,%eax
08121e58 +0x08c:  shl    $0x2,%eax
08121e5b +0x08f:  add    %edx,%eax
08121e5d +0x091:  add    %eax,%eax
08121e5f +0x093:  add    %edx,%eax
08121e61 +0x095:  mov    0x17(%eax,%ecx,1),%ecx
08121e65 +0x099:  mov    -0xc(%ebp),%edx
08121e68 +0x09c:  mov    0x8(%ebp),%ebx
08121e6b +0x09f:  mov    %edx,%eax
08121e6d +0x0a1:  shl    $0x2,%eax
08121e70 +0x0a4:  add    %edx,%eax
08121e72 +0x0a6:  add    %eax,%eax
08121e74 +0x0a8:  add    %edx,%eax
08121e76 +0x0aa:  movzwl 0x15(%eax,%ebx,1),%eax
08121e7b +0x0af:  movzwl %ax,%eax
08121e7e +0x0b2:  mov    0x18(%ebp),%edx
08121e81 +0x0b5:  mov    %edx,0x10(%esp)
08121e85 +0x0b9:  movl   $0x1,0xc(%esp)
08121e8d +0x0c1:  mov    %ecx,0x8(%esp)
08121e91 +0x0c5:  mov    %eax,0x4(%esp)
08121e95 +0x0c9:  mov    0xc(%ebp),%eax
08121e98 +0x0cc:  mov    %eax,(%esp)
08121e9b +0x0cf:  call   081223b4 <_ZN8APSystem9CUserProc15SendActionClearER5CUsertNS_17_ActionGroupIndexEb16ENUM_PACKETCLASS>  ; APSystem::CUserProc::SendActionClear(CUser&, unsigned short, APSystem::_ActionGroupIndex, bool, ENUM_PACKETCLASS)
08121ea0 +0x0d4:  jmp    08121f12 <+0x146>
08121ea2 +0x0d6:  cmpl   $0x1,0x18(%ebp)
08121ea6 +0x0da:  jne    08121ef9 <+0x12d>
08121ea8 +0x0dc:  mov    -0xc(%ebp),%edx
08121eab +0x0df:  mov    0x8(%ebp),%ecx
08121eae +0x0e2:  mov    %edx,%eax
08121eb0 +0x0e4:  shl    $0x2,%eax
08121eb3 +0x0e7:  add    %edx,%eax
08121eb5 +0x0e9:  add    %eax,%eax
08121eb7 +0x0eb:  add    %edx,%eax
08121eb9 +0x0ed:  mov    0x17(%eax,%ecx,1),%ecx
08121ebd +0x0f1:  mov    -0xc(%ebp),%edx
08121ec0 +0x0f4:  mov    0x8(%ebp),%ebx
08121ec3 +0x0f7:  mov    %edx,%eax
08121ec5 +0x0f9:  shl    $0x2,%eax
08121ec8 +0x0fc:  add    %edx,%eax
08121eca +0x0fe:  add    %eax,%eax
08121ecc +0x100:  add    %edx,%eax
08121ece +0x102:  movzwl 0x15(%eax,%ebx,1),%eax
08121ed3 +0x107:  movzwl %ax,%eax
08121ed6 +0x10a:  movl   $0x1,0x10(%esp)
08121ede +0x112:  movl   $0x0,0xc(%esp)
08121ee6 +0x11a:  mov    %ecx,0x8(%esp)
08121eea +0x11e:  mov    %eax,0x4(%esp)
08121eee +0x122:  mov    0xc(%ebp),%eax
08121ef1 +0x125:  mov    %eax,(%esp)
08121ef4 +0x128:  call   081223b4 <_ZN8APSystem9CUserProc15SendActionClearER5CUsertNS_17_ActionGroupIndexEb16ENUM_PACKETCLASS>  ; APSystem::CUserProc::SendActionClear(CUser&, unsigned short, APSystem::_ActionGroupIndex, bool, ENUM_PACKETCLASS)
08121ef9 +0x12d:  addl   $0x1,-0xc(%ebp)
08121efd +0x131:  cmpl   $0x12b,-0xc(%ebp)
08121f04 +0x138:  setle  %al
08121f07 +0x13b:  test   %al,%al
08121f09 +0x13d:  jne    08121de3 <+0x17>
08121f0f +0x143:  jmp    08121f12 <+0x146>
08121f11 +0x145:  nop
08121f12 +0x146:  movzbl -0xd(%ebp),%eax
08121f16 +0x14a:  add    $0x34,%esp
08121f19 +0x14d:  pop    %ebx
08121f1a +0x14e:  pop    %ebp
08121f1b +0x14f:  ret
```

## 反编译 C

```c
// APSystem::CActionPointManager::ClearAction @ 0x8121dcc

/* APSystem::CActionPointManager::ClearAction(CUser&, APSystem::_ActionGroupIndex, int,
   ENUM_PACKETCLASS) */

undefined1 __thiscall
APSystem::CActionPointManager::ClearAction
          (CActionPointManager *this,undefined4 param_1,int param_3,int param_4,int param_5)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (299 < local_10) {
      return 0;
    }
    if (*(int *)(this + local_10 * 0xb + 0x17) == 0) break;
    if (*(int *)(this + local_10 * 0xb + 0x17) == param_3) {
      cVar1 = ClearActionOne(this,(_ActionPoint *)(this + local_10 * 0xb + 0x15),param_4);
      if (cVar1 != '\0') {
        CUserProc::SendActionClear
                  (param_1,*(undefined2 *)(this + local_10 * 0xb + 0x15),
                   *(undefined4 *)(this + local_10 * 0xb + 0x17),1,param_5);
        return 1;
      }
      if (param_5 == 1) {
        CUserProc::SendActionClear
                  (param_1,*(undefined2 *)(this + local_10 * 0xb + 0x15),
                   *(undefined4 *)(this + local_10 * 0xb + 0x17),0,1);
      }
    }
    local_10 = local_10 + 1;
  }
  return 0;
}
```
