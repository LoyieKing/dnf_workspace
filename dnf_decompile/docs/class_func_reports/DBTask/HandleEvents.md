# HandleEvents

`_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi`

`DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&)`

| 类 | 地址 |
|---|---|
| `DBTask` | `0x083ff1c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ff1c8  _ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi
#           DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&)
# range [0x083ff1c8, 0x083ff3f3]
083ff1c8 +0x000:  push   %ebp
083ff1c9 +0x001:  mov    %esp,%ebp
083ff1cb +0x003:  push   %esi
083ff1cc +0x004:  push   %ebx
083ff1cd +0x005:  sub    $0x60,%esp
083ff1d0 +0x008:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
083ff1d5 +0x00d:  mov    0xc(%ebp),%edx
083ff1d8 +0x010:  mov    %edx,0x4(%esp)
083ff1dc +0x014:  mov    %eax,(%esp)
083ff1df +0x017:  call   085710ae <_ZN11MsgQueueMgr3getENS_9QUEUE_IDXE>  ; MsgQueueMgr::get(MsgQueueMgr::QUEUE_IDX)
083ff1e4 +0x01c:  mov    %eax,-0x14(%ebp)
083ff1e7 +0x01f:  cmpl   $0x0,-0x14(%ebp)
083ff1eb +0x023:  jne    083ff203 <+0x3b>
083ff1ed +0x025:  movl   $0x64,(%esp)
083ff1f4 +0x02c:  call   0858c4fa <_ZN6OS_API6uSleepEj>  ; OS_API::uSleep(unsigned int)
083ff1f9 +0x031:  mov    $0x1,%eax
083ff1fe +0x036:  jmp    083ff3ec <+0x224>
083ff203 +0x03b:  mov    0xc(%ebp),%edx
083ff206 +0x03e:  mov    0x8(%ebp),%eax
083ff209 +0x041:  mov    %edx,(%eax)
083ff20b +0x043:  mov    -0x14(%ebp),%eax
083ff20e +0x046:  mov    %eax,(%esp)
083ff211 +0x049:  call   0861bdd4 <_ZN6Stream6lengthEv>  ; Stream::length()
083ff216 +0x04e:  mov    %eax,-0x10(%ebp)
083ff219 +0x051:  mov    -0x14(%ebp),%eax
083ff21c +0x054:  mov    0x20(%eax),%eax
083ff21f +0x057:  mov    %eax,-0xc(%ebp)
083ff222 +0x05a:  mov    0x10(%ebp),%eax
083ff225 +0x05d:  mov    %eax,0x8(%esp)
083ff229 +0x061:  mov    -0x14(%ebp),%eax
083ff22c +0x064:  mov    %eax,0x4(%esp)
083ff230 +0x068:  mov    0x8(%ebp),%eax
083ff233 +0x06b:  mov    %eax,(%esp)
083ff236 +0x06e:  call   083ff3f4 <_ZN6DBTask9DBProcessEP6StreamRi>  ; DBTask::DBProcess(Stream*, int&)
083ff23b +0x073:  mov    0x10(%ebp),%eax
083ff23e +0x076:  mov    (%eax),%eax
083ff240 +0x078:  cmp    $0x3f,%eax
083ff243 +0x07b:  jne    083ff29d <+0xd5>
083ff245 +0x07d:  mov    0xc(%ebp),%esi
083ff248 +0x080:  mov    0xc(%ebp),%eax
083ff24b +0x083:  mov    %eax,(%esp)
083ff24e +0x086:  call   0844d7b4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3ca>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3ca
083ff253 +0x08b:  mov    %eax,%ebx
083ff255 +0x08d:  movl   $0x0,0xc(%esp)
083ff25d +0x095:  movl   $0x8e6,0x8(%esp)
083ff265 +0x09d:  movl   $&_ZZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERiE19__PRETTY_FUNCTION__,0x4(%esp)
083ff26d +0x0a5:  lea    -0x54(%ebp),%eax
083ff270 +0x0a8:  mov    %eax,(%esp)
083ff273 +0x0ab:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083ff278 +0x0b0:  mov    %esi,0xc(%esp)
083ff27c +0x0b4:  mov    %ebx,0x8(%esp)
083ff280 +0x0b8:  movl   $"Terminate Server db queue: %s(%d)\n",0x4(%esp)
083ff288 +0x0c0:  lea    -0x54(%ebp),%eax
083ff28b +0x0c3:  mov    %eax,(%esp)
083ff28e +0x0c6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083ff293 +0x0cb:  mov    $0x0,%eax
083ff298 +0x0d0:  jmp    083ff3ec <+0x224>
083ff29d +0x0d5:  mov    -0xc(%ebp),%eax
083ff2a0 +0x0d8:  cmp    $0x1,%eax
083ff2a3 +0x0db:  je     083ff2b7 <+0xef>
083ff2a5 +0x0dd:  cmp    $0x2,%eax
083ff2a8 +0x0e0:  je     083ff384 <+0x1bc>
083ff2ae +0x0e6:  test   %eax,%eax
083ff2b0 +0x0e8:  je     083ff31f <+0x157>
083ff2b2 +0x0ea:  jmp    083ff3e7 <+0x21f>
083ff2b7 +0x0ef:  cmpl   $0xfff,-0x10(%ebp)
083ff2be +0x0f6:  jle    083ff306 <+0x13e>
083ff2c0 +0x0f8:  mov    0x10(%ebp),%eax
083ff2c3 +0x0fb:  mov    (%eax),%ebx
083ff2c5 +0x0fd:  movl   $0x5,0xc(%esp)
083ff2cd +0x105:  movl   $0x8f2,0x8(%esp)
083ff2d5 +0x10d:  movl   $&_ZZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERiE19__PRETTY_FUNCTION__,0x4(%esp)
083ff2dd +0x115:  lea    -0x44(%ebp),%eax
083ff2e0 +0x118:  mov    %eax,(%esp)
083ff2e3 +0x11b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083ff2e8 +0x120:  mov    -0x10(%ebp),%eax
083ff2eb +0x123:  mov    %eax,0xc(%esp)
083ff2ef +0x127:  mov    %ebx,0x8(%esp)
083ff2f3 +0x12b:  movl   $"Small Stream Size over code(%d), size(%u)",0x4(%esp)
083ff2fb +0x133:  lea    -0x44(%ebp),%eax
083ff2fe +0x136:  mov    %eax,(%esp)
083ff301 +0x139:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083ff306 +0x13e:  mov    &_ZN10GlobalData19s_small_stream_poolE,%eax
083ff30b +0x143:  mov    -0x14(%ebp),%edx
083ff30e +0x146:  mov    %edx,0x4(%esp)
083ff312 +0x14a:  mov    %eax,(%esp)
083ff315 +0x14d:  call   08290004 <_ZN15SmallStreamPool4FreeEP6Stream>  ; SmallStreamPool::Free(Stream*)
083ff31a +0x152:  jmp    083ff3e7 <+0x21f>
083ff31f +0x157:  cmpl   $0x3fff,-0x10(%ebp)
083ff326 +0x15e:  jle    083ff36e <+0x1a6>
083ff328 +0x160:  mov    0x10(%ebp),%eax
083ff32b +0x163:  mov    (%eax),%ebx
083ff32d +0x165:  movl   $0x5,0xc(%esp)
083ff335 +0x16d:  movl   $0x8fd,0x8(%esp)
083ff33d +0x175:  movl   $&_ZZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERiE19__PRETTY_FUNCTION__,0x4(%esp)
083ff345 +0x17d:  lea    -0x34(%ebp),%eax
083ff348 +0x180:  mov    %eax,(%esp)
083ff34b +0x183:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083ff350 +0x188:  mov    -0x10(%ebp),%eax
083ff353 +0x18b:  mov    %eax,0xc(%esp)
083ff357 +0x18f:  mov    %ebx,0x8(%esp)
083ff35b +0x193:  movl   $"Default Stream Size over code(%d), size(%u)",0x4(%esp)
083ff363 +0x19b:  lea    -0x34(%ebp),%eax
083ff366 +0x19e:  mov    %eax,(%esp)
083ff369 +0x1a1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083ff36e +0x1a6:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
083ff373 +0x1ab:  mov    -0x14(%ebp),%edx
083ff376 +0x1ae:  mov    %edx,0x4(%esp)
083ff37a +0x1b2:  mov    %eax,(%esp)
083ff37d +0x1b5:  call   0828fb28 <_ZN10StreamPool4FreeEP6Stream>  ; StreamPool::Free(Stream*)
083ff382 +0x1ba:  jmp    083ff3e7 <+0x21f>
083ff384 +0x1bc:  cmpl   $0x3ffff,-0x10(%ebp)
083ff38b +0x1c3:  jle    083ff3d3 <+0x20b>
083ff38d +0x1c5:  mov    0x10(%ebp),%eax
083ff390 +0x1c8:  mov    (%eax),%ebx
083ff392 +0x1ca:  movl   $0x5,0xc(%esp)
083ff39a +0x1d2:  movl   $0x908,0x8(%esp)
083ff3a2 +0x1da:  movl   $&_ZZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERiE19__PRETTY_FUNCTION__,0x4(%esp)
083ff3aa +0x1e2:  lea    -0x24(%ebp),%eax
083ff3ad +0x1e5:  mov    %eax,(%esp)
083ff3b0 +0x1e8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083ff3b5 +0x1ed:  mov    -0x10(%ebp),%eax
083ff3b8 +0x1f0:  mov    %eax,0xc(%esp)
083ff3bc +0x1f4:  mov    %ebx,0x8(%esp)
083ff3c0 +0x1f8:  movl   $"Big Stream Size over code(%d), size(%u)",0x4(%esp)
083ff3c8 +0x200:  lea    -0x24(%ebp),%eax
083ff3cb +0x203:  mov    %eax,(%esp)
083ff3ce +0x206:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083ff3d3 +0x20b:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
083ff3d8 +0x210:  mov    -0x14(%ebp),%edx
083ff3db +0x213:  mov    %edx,0x4(%esp)
083ff3df +0x217:  mov    %eax,(%esp)
083ff3e2 +0x21a:  call   08290304 <_ZN13BigStreamPool4FreeEP6Stream>  ; BigStreamPool::Free(Stream*)
083ff3e7 +0x21f:  mov    $0x1,%eax
083ff3ec +0x224:  add    $0x60,%esp
083ff3ef +0x227:  pop    %ebx
083ff3f0 +0x228:  pop    %esi
083ff3f1 +0x229:  pop    %ebp
083ff3f2 +0x22a:  ret
083ff3f3 +0x22b:  nop
```

## 反编译 C

```c
// DBTask::HandleEvents @ 0x83ff1c8

/* DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&) */

undefined4 __thiscall DBTask::HandleEvents(DBTask *this,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  Stream *local_18;
  int local_14;
  int local_10;
  
  local_18 = (Stream *)MsgQueueMgr::get(GlobalData::s_msgq_mgr,param_2);
  if (local_18 == (Stream *)0x0) {
    OS_API::uSleep(100);
    uVar2 = 1;
  }
  else {
    *(undefined4 *)this = param_2;
    local_14 = Stream::length(local_18);
    local_10 = *(int *)(local_18 + 0x20);
    DBProcess(this,local_18,param_3);
    if (*param_3 == 0x3f) {
      uVar2 = MsgQueueMgr::get_queue_name(param_2);
      cMyTrace::cMyTrace(local_58,"bool DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&)",0x8e6,0)
      ;
      cMyTrace::operator()(local_58,"Terminate Server db queue: %s(%d)\n",uVar2,param_2);
      uVar2 = 0;
    }
    else {
      if (local_10 == 1) {
        if (0xfff < local_14) {
          iVar1 = *param_3;
          cMyTrace::cMyTrace(local_48,"bool DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&)",
                             0x8f2,5);
          cMyTrace::operator()(local_48,"Small Stream Size over code(%d), size(%u)",iVar1,local_14);
        }
        SmallStreamPool::Free(GlobalData::s_small_stream_pool,local_18);
      }
      else if (local_10 == 2) {
        if (0x3ffff < local_14) {
          iVar1 = *param_3;
          cMyTrace::cMyTrace(local_28,"bool DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&)",
                             0x908,5);
          cMyTrace::operator()(local_28,"Big Stream Size over code(%d), size(%u)",iVar1,local_14);
        }
        BigStreamPool::Free(GlobalData::s_big_stream_pool,local_18);
      }
      else if (local_10 == 0) {
        if (0x3fff < local_14) {
          iVar1 = *param_3;
          cMyTrace::cMyTrace(local_38,"bool DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&)",
                             0x8fd,5);
          cMyTrace::operator()
                    (local_38,"Default Stream Size over code(%d), size(%u)",iVar1,local_14);
        }
        StreamPool::Free(GlobalData::s_stream_pool,local_18);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
