<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: app_socket.proto

namespace Com\Elarian\Hera\Proto;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>com.elarian.hera.proto.ServerToAppNotificationReply</code>
 */
class ServerToAppNotificationReply extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.AppDataUpdate data_update = 1;</code>
     */
    protected $data_update = null;
    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.OutboundMessage message = 2;</code>
     */
    protected $message = null;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type \Com\Elarian\Hera\Proto\AppDataUpdate $data_update
     *     @type \Com\Elarian\Hera\Proto\OutboundMessage $message
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\AppSocket::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.AppDataUpdate data_update = 1;</code>
     * @return \Com\Elarian\Hera\Proto\AppDataUpdate
     */
    public function getDataUpdate()
    {
        return isset($this->data_update) ? $this->data_update : null;
    }

    public function hasDataUpdate()
    {
        return isset($this->data_update);
    }

    public function clearDataUpdate()
    {
        unset($this->data_update);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.AppDataUpdate data_update = 1;</code>
     * @param \Com\Elarian\Hera\Proto\AppDataUpdate $var
     * @return $this
     */
    public function setDataUpdate($var)
    {
        GPBUtil::checkMessage($var, \Com\Elarian\Hera\Proto\AppDataUpdate::class);
        $this->data_update = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.OutboundMessage message = 2;</code>
     * @return \Com\Elarian\Hera\Proto\OutboundMessage
     */
    public function getMessage()
    {
        return isset($this->message) ? $this->message : null;
    }

    public function hasMessage()
    {
        return isset($this->message);
    }

    public function clearMessage()
    {
        unset($this->message);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.OutboundMessage message = 2;</code>
     * @param \Com\Elarian\Hera\Proto\OutboundMessage $var
     * @return $this
     */
    public function setMessage($var)
    {
        GPBUtil::checkMessage($var, \Com\Elarian\Hera\Proto\OutboundMessage::class);
        $this->message = $var;

        return $this;
    }

}
