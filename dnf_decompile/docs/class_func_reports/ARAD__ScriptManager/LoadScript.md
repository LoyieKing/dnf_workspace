# LoadScript

`_ZN4ARAD13ScriptManager10LoadScriptEv`

`ARAD::ScriptManager::LoadScript()`

| 类 | 地址 |
|---|---|
| `ARAD::ScriptManager` | `0x081a11dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a11dc  _ZN4ARAD13ScriptManager10LoadScriptEv
#           ARAD::ScriptManager::LoadScript()
# range [0x081a11dc, 0x081a12f7]
081a11dc +0x000:  push   %ebp
081a11dd +0x001:  mov    %esp,%ebp
081a11df +0x003:  sub    $0x58,%esp
081a11e2 +0x006:  mov    0x8(%ebp),%eax
081a11e5 +0x009:  mov    %eax,(%esp)
081a11e8 +0x00c:  call   081a13f6 <_ZN4ARAD13ScriptManager4InitEv>  ; ARAD::ScriptManager::Init()
081a11ed +0x011:  mov    0x8(%ebp),%edx
081a11f0 +0x014:  lea    -0x2c(%ebp),%eax
081a11f3 +0x017:  mov    %edx,0x4(%esp)
081a11f7 +0x01b:  mov    %eax,(%esp)
081a11fa +0x01e:  call   081a1556 <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x1c>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x1c
081a11ff +0x023:  sub    $0x4,%esp
081a1202 +0x026:  mov    0x8(%ebp),%edx
081a1205 +0x029:  lea    -0x30(%ebp),%eax
081a1208 +0x02c:  mov    %edx,0x4(%esp)
081a120c +0x030:  mov    %eax,(%esp)
081a120f +0x033:  call   081a157c <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x42>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x42
081a1214 +0x038:  sub    $0x4,%esp
081a1217 +0x03b:  jmp    081a12d7 <+0xfb>
081a121c +0x040:  lea    -0x2c(%ebp),%eax
081a121f +0x043:  mov    %eax,(%esp)
081a1222 +0x046:  call   081a15b6 <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x7c>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x7c
081a1227 +0x04b:  mov    (%eax),%eax
081a1229 +0x04d:  mov    (%eax),%edx
081a122b +0x04f:  mov    (%edx),%edx
081a122d +0x051:  mov    %eax,(%esp)
081a1230 +0x054:  call   *%edx
081a1232 +0x056:  xor    $0x1,%eax
081a1235 +0x059:  test   %al,%al
081a1237 +0x05b:  je     081a1286 <+0xaa>
081a1239 +0x05d:  movl   $0x1,0x14(%esp)
081a1241 +0x065:  movl   $0x1,0x10(%esp)
081a1249 +0x06d:  movl   $0x9,0xc(%esp)
081a1251 +0x075:  movl   $0x12,0x8(%esp)
081a1259 +0x07d:  movl   $&_ZZN4ARAD13ScriptManager10LoadScriptEvE19__PRETTY_FUNCTION__,0x4(%esp)
081a1261 +0x085:  lea    -0x28(%ebp),%eax
081a1264 +0x088:  mov    %eax,(%esp)
081a1267 +0x08b:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081a126c +0x090:  movl   $"Fail",0x4(%esp)
081a1274 +0x098:  lea    -0x28(%ebp),%eax
081a1277 +0x09b:  mov    %eax,(%esp)
081a127a +0x09e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081a127f +0x0a3:  mov    $0x0,%eax
081a1284 +0x0a8:  jmp    081a12f6 <+0x11a>
081a1286 +0x0aa:  movl   $0x1,0x14(%esp)
081a128e +0x0b2:  movl   $0x0,0x10(%esp)
081a1296 +0x0ba:  movl   $0x9,0xc(%esp)
081a129e +0x0c2:  movl   $0x15,0x8(%esp)
081a12a6 +0x0ca:  movl   $&_ZZN4ARAD13ScriptManager10LoadScriptEvE19__PRETTY_FUNCTION__,0x4(%esp)
081a12ae +0x0d2:  lea    -0x18(%ebp),%eax
081a12b1 +0x0d5:  mov    %eax,(%esp)
081a12b4 +0x0d8:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081a12b9 +0x0dd:  movl   $"Success",0x4(%esp)
081a12c1 +0x0e5:  lea    -0x18(%ebp),%eax
081a12c4 +0x0e8:  mov    %eax,(%esp)
081a12c7 +0x0eb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081a12cc +0x0f0:  lea    -0x2c(%ebp),%eax
081a12cf +0x0f3:  mov    %eax,(%esp)
081a12d2 +0x0f6:  call   081a15c4 <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x8a>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x8a
081a12d7 +0x0fb:  lea    -0x30(%ebp),%eax
081a12da +0x0fe:  mov    %eax,0x4(%esp)
081a12de +0x102:  lea    -0x2c(%ebp),%eax
081a12e1 +0x105:  mov    %eax,(%esp)
081a12e4 +0x108:  call   081a15a2 <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x68>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x68
081a12e9 +0x10d:  test   %al,%al
081a12eb +0x10f:  jne    081a121c <+0x40>
081a12f1 +0x115:  mov    $0x1,%eax
081a12f6 +0x11a:  leave
081a12f7 +0x11b:  ret
```

## 反编译 C

```c
// ARAD::ScriptManager::LoadScript @ 0x81a11dc

/* ARAD::ScriptManager::LoadScript() */

undefined4 __thiscall ARAD::ScriptManager::LoadScript(ScriptManager *this)

{
  char cVar1;
  undefined4 *puVar2;
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  local_34 [4];
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  local_30 [4];
  cMyTrace local_2c [16];
  cMyTrace local_1c [24];
  
  Init(this);
  std::
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  ::begin(local_30);
  std::
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  ::end(local_34);
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator!=
                      ((_Rb_tree_const_iterator<ARAD::ScriptInterface*> *)local_30,
                       (_Rb_tree_const_iterator *)local_34);
    if (cVar1 == '\0') {
      return 1;
    }
    puVar2 = (undefined4 *)
             std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator*
                       ((_Rb_tree_const_iterator<ARAD::ScriptInterface*> *)local_30);
    cVar1 = (*(code *)**(undefined4 **)*puVar2)((undefined4 *)*puVar2);
    if (cVar1 != '\x01') break;
    cMyTrace::cMyTrace(local_1c,"bool ARAD::ScriptManager::LoadScript()",0x15,9,false,true);
    cMyTrace::operator()(local_1c,"Success");
    std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator++
              ((_Rb_tree_const_iterator<ARAD::ScriptInterface*> *)local_30);
  }
  cMyTrace::cMyTrace(local_2c,"bool ARAD::ScriptManager::LoadScript()",0x12,9,true,true);
  cMyTrace::operator()(local_2c,"Fail");
  return 0;
}
```
