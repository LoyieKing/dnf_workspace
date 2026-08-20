# ActiveFatigueBattery_EndLevel

`_ZN21CFatigueBatteryHandle29ActiveFatigueBattery_EndLevelEP5CUser`

`CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel(CUser*)`

| 类 | 地址 |
|---|---|
| `CFatigueBatteryHandle` | `0x084a81f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a81f4  _ZN21CFatigueBatteryHandle29ActiveFatigueBattery_EndLevelEP5CUser
#           CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel(CUser*)
# range [0x084a81f4, 0x084a829d]
084a81f4 +0x00:  push   %ebp
084a81f5 +0x01:  mov    %esp,%ebp
084a81f7 +0x03:  push   %ebx
084a81f8 +0x04:  sub    $0x34,%esp
084a81fb +0x07:  movl   $0x0,-0x14(%ebp)
084a8202 +0x0e:  mov    0xc(%ebp),%eax
084a8205 +0x11:  mov    %eax,(%esp)
084a8208 +0x14:  call   084a857e <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xe4>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xe4
084a820d +0x19:  cwtl
084a820e +0x1a:  mov    %eax,-0x10(%ebp)
084a8211 +0x1d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a8216 +0x22:  add    $0x68,%eax
084a8219 +0x25:  mov    %eax,-0xc(%ebp)
084a821c +0x28:  mov    -0x10(%ebp),%eax
084a821f +0x2b:  mov    %eax,-0x14(%ebp)
084a8222 +0x2e:  mov    0xc(%ebp),%eax
084a8225 +0x31:  mov    %eax,(%esp)
084a8228 +0x34:  call   084a857e <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xe4>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xe4
084a822d +0x39:  cwtl
084a822e +0x3a:  cmp    -0x14(%ebp),%eax
084a8231 +0x3d:  setne  %al
084a8234 +0x40:  test   %al,%al
084a8236 +0x42:  je     084a8295 <+0xa1>
084a8238 +0x44:  mov    0xc(%ebp),%eax
084a823b +0x47:  mov    %eax,(%esp)
084a823e +0x4a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084a8243 +0x4f:  mov    %eax,%ebx
084a8245 +0x51:  movl   $0x0,0xc(%esp)
084a824d +0x59:  movl   $0x77,0x8(%esp)
084a8255 +0x61:  movl   $&_ZZN21CFatigueBatteryHandle29ActiveFatigueBattery_EndLevelEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
084a825d +0x69:  lea    -0x24(%ebp),%eax
084a8260 +0x6c:  mov    %eax,(%esp)
084a8263 +0x6f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084a8268 +0x74:  mov    -0x14(%ebp),%eax
084a826b +0x77:  mov    %eax,0xc(%esp)
084a826f +0x7b:  mov    %ebx,0x8(%esp)
084a8273 +0x7f:  movl   $"FATIGUE BATTERY ACTIVE ERR : char no(%d), usedFatigue(%d)",0x4(%esp)
084a827b +0x87:  lea    -0x24(%ebp),%eax
084a827e +0x8a:  mov    %eax,(%esp)
084a8281 +0x8d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084a8286 +0x92:  mov    0xc(%ebp),%eax
084a8289 +0x95:  mov    %eax,(%esp)
084a828c +0x98:  call   084a857e <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xe4>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xe4
084a8291 +0x9d:  cwtl
084a8292 +0x9e:  mov    %eax,-0x14(%ebp)
084a8295 +0xa1:  mov    -0x14(%ebp),%eax
084a8298 +0xa4:  add    $0x34,%esp
084a829b +0xa7:  pop    %ebx
084a829c +0xa8:  pop    %ebp
084a829d +0xa9:  ret
```

## 反编译 C

```c
// CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel @ 0x84a81f4

/* CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel(CUser*) */

int __thiscall
CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel(CFatigueBatteryHandle *this,CUser *param_1)

{
  short sVar1;
  undefined4 uVar2;
  cMyTrace local_28 [16];
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  sVar1 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
  local_14 = (int)sVar1;
  local_10 = G_CDataManager();
  local_10 = local_10 + 0x68;
  local_18 = local_14;
  sVar1 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
  if (sVar1 != local_18) {
    uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_28,
                       "short int CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel(CUser*)",0x77
                       ,0);
    cMyTrace::operator()
              (local_28,"FATIGUE BATTERY ACTIVE ERR : char no(%d), usedFatigue(%d)",uVar2,local_18);
    sVar1 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
    local_18 = (int)sVar1;
  }
  return local_18;
}
```
