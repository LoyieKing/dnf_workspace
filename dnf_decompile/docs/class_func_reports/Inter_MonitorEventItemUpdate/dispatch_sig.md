# dispatch_sig

`_ZN28Inter_MonitorEventItemUpdate12dispatch_sigEP5CUserPci`

`Inter_MonitorEventItemUpdate::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorEventItemUpdate` | `0x084cefd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cefd2  _ZN28Inter_MonitorEventItemUpdate12dispatch_sigEP5CUserPci
#           Inter_MonitorEventItemUpdate::dispatch_sig(CUser*, char*, int)
# range [0x084cefd2, 0x084cf0c3]
084cefd2 +0x00:  push   %ebp
084cefd3 +0x01:  mov    %esp,%ebp
084cefd5 +0x03:  push   %edi
084cefd6 +0x04:  push   %esi
084cefd7 +0x05:  push   %ebx
084cefd8 +0x06:  sub    $0x6c,%esp
084cefdb +0x09:  mov    0x10(%ebp),%eax
084cefde +0x0c:  mov    %eax,-0x1c(%ebp)
084cefe1 +0x0f:  mov    -0x1c(%ebp),%eax
084cefe4 +0x12:  mov    0x1a(%eax),%eax
084cefe7 +0x15:  mov    %eax,-0x40(%ebp)
084cefea +0x18:  mov    -0x1c(%ebp),%eax
084cefed +0x1b:  mov    0x16(%eax),%eax
084ceff0 +0x1e:  mov    %eax,-0x3c(%ebp)
084ceff3 +0x21:  mov    -0x1c(%ebp),%eax
084ceff6 +0x24:  mov    0xe(%eax),%edi
084ceff9 +0x27:  mov    -0x1c(%ebp),%eax
084ceffc +0x2a:  mov    0x12(%eax),%esi
084cefff +0x2d:  mov    -0x1c(%ebp),%eax
084cf002 +0x30:  mov    0xa(%eax),%eax
084cf005 +0x33:  movl   $0x0,0x4(%esp)
084cf00d +0x3b:  mov    %eax,(%esp)
084cf010 +0x3e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084cf015 +0x43:  mov    %eax,%ebx
084cf017 +0x45:  movl   $0x0,0xc(%esp)
084cf01f +0x4d:  movl   $0x2bff,0x8(%esp)
084cf027 +0x55:  movl   $&_ZZN28Inter_MonitorEventItemUpdate12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084cf02f +0x5d:  lea    -0x2c(%ebp),%eax
084cf032 +0x60:  mov    %eax,(%esp)
084cf035 +0x63:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084cf03a +0x68:  mov    -0x40(%ebp),%eax
084cf03d +0x6b:  mov    %eax,0x20(%esp)
084cf041 +0x6f:  mov    -0x3c(%ebp),%eax
084cf044 +0x72:  mov    %eax,0x1c(%esp)
084cf048 +0x76:  mov    %edi,0x18(%esp)
084cf04c +0x7a:  mov    %esi,0x14(%esp)
084cf050 +0x7e:  mov    %ebx,0x10(%esp)
084cf054 +0x82:  movl   $0x2bff,0xc(%esp)
084cf05c +0x8a:  movl   $&_ZZN28Inter_MonitorEventItemUpdate12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cf064 +0x92:  movl   $"[%s][%d],이벤트 유저 DB ID : %s [EventType: %d][CharacNo: %d][ItemID: %d][Stack: %d]\n",0x4(%esp)
084cf06c +0x9a:  lea    -0x2c(%ebp),%eax
084cf06f +0x9d:  mov    %eax,(%esp)
084cf072 +0xa0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084cf077 +0xa5:  mov    -0x1c(%ebp),%eax
084cf07a +0xa8:  mov    0x1e(%eax),%edi
084cf07d +0xab:  mov    -0x1c(%ebp),%eax
084cf080 +0xae:  mov    0x12(%eax),%esi
084cf083 +0xb1:  mov    -0x1c(%ebp),%eax
084cf086 +0xb4:  mov    0x1a(%eax),%ebx
084cf089 +0xb7:  mov    -0x1c(%ebp),%eax
084cf08c +0xba:  mov    0x16(%eax),%ecx
084cf08f +0xbd:  mov    -0x1c(%ebp),%eax
084cf092 +0xc0:  mov    0xe(%eax),%edx
084cf095 +0xc3:  mov    -0x1c(%ebp),%eax
084cf098 +0xc6:  mov    0xa(%eax),%eax
084cf09b +0xc9:  mov    %edi,0x14(%esp)
084cf09f +0xcd:  mov    %esi,0x10(%esp)
084cf0a3 +0xd1:  mov    %ebx,0xc(%esp)
084cf0a7 +0xd5:  mov    %ecx,0x8(%esp)
084cf0ab +0xd9:  mov    %edx,0x4(%esp)
084cf0af +0xdd:  mov    %eax,(%esp)
084cf0b2 +0xe0:  call   086c11d0 <_ZN8WongWork9CWebEvent15RecvInfoFromWebEjjjjjj>  ; WongWork::CWebEvent::RecvInfoFromWeb(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
084cf0b7 +0xe5:  mov    $0x0,%eax
084cf0bc +0xea:  add    $0x6c,%esp
084cf0bf +0xed:  pop    %ebx
084cf0c0 +0xee:  pop    %esi
084cf0c1 +0xef:  pop    %edi
084cf0c2 +0xf0:  pop    %ebp
084cf0c3 +0xf1:  ret
```

## 反编译 C

```c
// Inter_MonitorEventItemUpdate::dispatch_sig @ 0x84cefd2

/* Inter_MonitorEventItemUpdate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorEventItemUpdate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  cMyTrace local_30 [16];
  int local_20;
  
  local_20 = param_3;
  uVar1 = *(undefined4 *)(param_3 + 0x1a);
  uVar2 = *(undefined4 *)(param_3 + 0x16);
  uVar3 = *(undefined4 *)(param_3 + 0xe);
  uVar4 = *(undefined4 *)(param_3 + 0x12);
  uVar5 = NumberToString(*(uint *)(param_3 + 10),0);
  cMyTrace::cMyTrace(local_30,
                     "virtual int Inter_MonitorEventItemUpdate::dispatch_sig(CUser*, char*, int)",
                     0x2bff,0);
  cMyTrace::operator()
            (local_30,&DAT_08c88a64,
             "virtual int Inter_MonitorEventItemUpdate::dispatch_sig(CUser*, char*, int)",0x2bff,
             uVar5,uVar4,uVar3,uVar2,uVar1);
  WongWork::CWebEvent::RecvInfoFromWeb
            (*(uint *)(local_20 + 10),*(uint *)(local_20 + 0xe),*(uint *)(local_20 + 0x16),
             *(uint *)(local_20 + 0x1a),*(uint *)(local_20 + 0x12),*(uint *)(local_20 + 0x1e));
  return 0;
}
```
