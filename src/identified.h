#ifndef LWMQTT_IDENTIFIED_H
#define LWMQTT_IDENTIFIED_H

/**
  * Decodes the supplied (wire) buffer into an ack
  *
  * @param packet_type returned integer - the MQTT packet type
  * @param dup returned integer - the MQTT dup flag
  * @param packet_id returned integer - the MQTT packet identifier
  * @param buf the raw buffer data, of the correct length determined by the remaining length field
  * @param buf_len the length in bytes of the data in the supplied buffer
  * @return error code.  1 is success, 0 is failure
  */
int lwmqtt_decode_identified(unsigned char *packet_type, unsigned char *dup, unsigned short *packet_id,
                             unsigned char *buf, int buf_len);

int lwmqtt_encode_identified(unsigned char *buf, int buf_len, unsigned char packet_type, unsigned char dup,
                             unsigned short packet_id);

#endif
