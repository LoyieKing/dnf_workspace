# GetGameDBInfo

`_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA`

`DB_Login::GetGameDBInfo(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08414772` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08414772  _ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA
#           DB_Login::GetGameDBInfo(SIG_LOGIN_DATA*)
# range [0x08414772, 0x084148a5]
08414772 +0x000:  push   %ebp
08414773 +0x001:  mov    %esp,%ebp
08414775 +0x003:  sub    $0x28,%esp
08414778 +0x006:  mov    0xc(%ebp),%eax
0841477b +0x009:  mov    %eax,0x4(%esp)
0841477f +0x00d:  mov    0x8(%ebp),%eax
08414782 +0x010:  mov    %eax,(%esp)
08414785 +0x013:  call   084149ce <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA>  ; DB_Login::_getGameDBCharacView(SIG_LOGIN_DATA*)
0841478a +0x018:  mov    %eax,-0x14(%ebp)
0841478d +0x01b:  mov    -0x14(%ebp),%eax
08414790 +0x01e:  cmp    $0xffffffff,%eax
08414793 +0x021:  jne    0841479f <+0x2d>
08414795 +0x023:  mov    $0x1,%eax
0841479a +0x028:  jmp    084148a3 <+0x131>
0841479f +0x02d:  mov    -0x14(%ebp),%eax
084147a2 +0x030:  cmp    $0x1,%eax
084147a5 +0x033:  jne    084147b1 <+0x3f>
084147a7 +0x035:  mov    $0x0,%eax
084147ac +0x03a:  jmp    084148a3 <+0x131>
084147b1 +0x03f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084147b6 +0x044:  mov    %eax,(%esp)
084147b9 +0x047:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084147be +0x04c:  cmp    $0x7,%eax
084147c1 +0x04f:  sete   %al
084147c4 +0x052:  test   %al,%al
084147c6 +0x054:  je     0841489e <+0x12c>
084147cc +0x05a:  movl   $0x0,-0x10(%ebp)
084147d3 +0x061:  mov    0xc(%ebp),%eax
084147d6 +0x064:  mov    0xdc(%eax),%eax
084147dc +0x06a:  mov    %eax,-0xc(%ebp)
084147df +0x06d:  jmp    0841487e <+0x10c>
084147e4 +0x072:  mov    -0x10(%ebp),%eax
084147e7 +0x075:  mov    0xc(%ebp),%edx
084147ea +0x078:  imul   $0x94,%eax,%eax
084147f0 +0x07e:  lea    (%edx,%eax,1),%eax
084147f3 +0x081:  add    $0xe0,%eax
084147f8 +0x086:  mov    (%eax),%eax
084147fa +0x088:  mov    %eax,%edx
084147fc +0x08a:  mov    0xc(%ebp),%eax
084147ff +0x08d:  mov    0x39ac(%eax),%eax
08414805 +0x093:  cmp    %eax,%edx
08414807 +0x095:  jne    0841487a <+0x108>
08414809 +0x097:  mov    -0x10(%ebp),%eax
0841480c +0x09a:  imul   $0x94,%eax,%eax
08414812 +0x0a0:  add    $0xe0,%eax
08414817 +0x0a5:  add    0xc(%ebp),%eax
0841481a +0x0a8:  mov    0xc(%ebp),%edx
0841481d +0x0ab:  add    $0xe0,%edx
08414823 +0x0b1:  movl   $0x94,0x8(%esp)
0841482b +0x0b9:  mov    %eax,0x4(%esp)
0841482f +0x0bd:  mov    %edx,(%esp)
08414832 +0x0c0:  call   0807d880 <_init+0x178>
08414837 +0x0c5:  mov    0xc(%ebp),%eax
0841483a +0x0c8:  add    $0x39b0,%eax
0841483f +0x0cd:  movzbl (%eax),%eax
08414842 +0x0d0:  test   %al,%al
08414844 +0x0d2:  je     0841486b <+0xf9>
08414846 +0x0d4:  mov    0xc(%ebp),%eax
08414849 +0x0d7:  lea    0x39b0(%eax),%edx
0841484f +0x0dd:  mov    0xc(%ebp),%eax
08414852 +0x0e0:  add    $0xe4,%eax
08414857 +0x0e5:  movl   $0x1e,0x8(%esp)
0841485f +0x0ed:  mov    %edx,0x4(%esp)
08414863 +0x0f1:  mov    %eax,(%esp)
08414866 +0x0f4:  call   0807d8d0 <_init+0x1c8>
0841486b +0x0f9:  mov    0xc(%ebp),%eax
0841486e +0x0fc:  movl   $0x1,0xdc(%eax)
08414878 +0x106:  jmp    0841488f <+0x11d>
0841487a +0x108:  addl   $0x1,-0x10(%ebp)
0841487e +0x10c:  mov    -0x10(%ebp),%eax
08414881 +0x10f:  cmp    -0xc(%ebp),%eax
08414884 +0x112:  setl   %al
08414887 +0x115:  test   %al,%al
08414889 +0x117:  jne    084147e4 <+0x72>
0841488f +0x11d:  mov    -0x10(%ebp),%eax
08414892 +0x120:  cmp    -0xc(%ebp),%eax
08414895 +0x123:  jne    0841489e <+0x12c>
08414897 +0x125:  mov    $0x1,%eax
0841489c +0x12a:  jmp    084148a3 <+0x131>
0841489e +0x12c:  mov    $0x0,%eax
084148a3 +0x131:  leave
084148a4 +0x132:  ret
084148a5 +0x133:  nop
```

## 反编译 C

```c
// DB_Login::GetGameDBInfo @ 0x8414772

/* DB_Login::GetGameDBInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetGameDBInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  int iVar1;
  undefined4 uVar2;
  GameWorld *this_00;
  int local_14;
  
  iVar1 = _getGameDBCharacView(this,param_1);
  if (iVar1 == -1) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    this_00 = (GameWorld *)G_GameWorld();
    iVar1 = GameWorld::GetChannelType(this_00);
    if (iVar1 == 7) {
      local_14 = 0;
      iVar1 = *(int *)(param_1 + 0xdc);
      for (; local_14 < iVar1; local_14 = local_14 + 1) {
        if (*(int *)(param_1 + local_14 * 0x94 + 0xe0) == *(int *)(param_1 + 0x39ac)) {
          memmove(param_1 + 0xe0,param_1 + local_14 * 0x94 + 0xe0,0x94);
          if (param_1[0x39b0] != (SIG_LOGIN_DATA)0x0) {
            strncpy((char *)(param_1 + 0xe4),(char *)(param_1 + 0x39b0),0x1e);
          }
          *(undefined4 *)(param_1 + 0xdc) = 1;
          break;
        }
      }
      if (local_14 == iVar1) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}
```
